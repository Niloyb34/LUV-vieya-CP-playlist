///GRaph representation using adjacency matrix
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;//mane nodes ba vertices maximum hote pare N=10^3 ba 1000 hote pare drlam

int graph[N][N];///mane N *N adjacency matrix dia represent korbo graph take and amra aita globally declare korate etar man initially by default =0 hbe
int main()
{
       int n,m;///n= vertices and m=edges
       for(int i=0;i<m;i++)///mane edges number prjnto cholbe ari and every edge er jnno duita vertex ke input hisebe nibe
       {
           int v1,v2;
           cin>>v1>>v2;
           graph[v1][v2]=1;///jesob vertex gulake amra input nibo tader modde je edges ase seta bujate amra 1 dillam
           graph[v2][v1]=1;///undirected graph hole ultao tao true
       }
}
/*BUt in this adjacency matrix representation  there are some problems
1)int graph[N][N] atar space complexity onek beshi O(N*N)=O(N^2)
aikane kono karone N er man ta 10^4 er beshi jemon 10^6 hoi gele tkon asole store kora
possible na karon continous allocation problem er karone 10^8 er beshi store kora
possible na karon 10^5*10^5 =10^10 hoi jete pare jei matrix ta kina store kora possible
na , tie oi smosto case e amader use korte hoi adjacency list aikane amader
vertices ase 3 ti dro 0,1,2 tahole amra 3 ti list banabo

0-->1
1--> 0,2
2-->1
atie holo amader adjacency list representation
aikane kintu N*N space lagtese na bron node
/ vertex ase 3 ti and edges ase 2 ti tie aigular jnnoi space lagbe only 
mane amader aikane space complexity hbe O(V+E)



*/
