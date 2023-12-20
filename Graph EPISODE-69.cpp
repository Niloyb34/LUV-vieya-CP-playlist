///GRaph representation using adjacency graph and adjacency list for weighted undirected graph
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;//mane nodes ba vertices maximum hote pare N=10^3 ba 1000 hote pare drlam

int graph1[N][N];///mane N *N adjacency matrix dia represent korbo graph1 take and amra aita globally declare korate etar man initially by default =0 hbe
vector<pair<int,int>>graph2[N];///pair use korar karon jathe weight tao store korte pari
int main()
{
    int n,m,wt;///n= vertices and m=edges ,wt=weight
    for(int i=0; i<m; i++) ///mane edges number prjnto cholbe ari and every edge er jnno duita vertex ke input hisebe nibe
    {
        int v1,v2;
        cin>>v1>>v2>>wt;
        ///Adjacency matric approach aitate N^2 space nei , tie onek bro graph amra store korte parbo na
        graph1[v1][v2]=wt;///jesob vertex gulake amra input nibo tader modde je edges ase seta bujate amra 1 dillam
        graph1[v2][v1]=wt;///undirected graph hole ultao tao true
       /*Adjacency matrix e subida holo jdi amra ask kori i and j connected kina and i and j er weight kemon tahole adjacency matrix er question
       er answer O(1) e dia dibe  jemon niche */
         if(graph1[i][j]==1)
         {
                //connected
         }
         cout<<graph1[i][j];
         ///Adjacency list approach
        graph2[v1].push_back({v2,wt});///mane pair.first dibe je node er sathe conected sei vertex and pair.second dibe je weight ta
        graph2[v2].push_back({v1,wt});

      for(int child:graph2)
      {
             if(child==j)
             {
                    //connected
                    ///mane adjacency list e connected kina check korar jnno O(N) complexity lage ja O(1) TEKE BESHI.
             }
      }
      ///othoba
      for(pair<int,int>child:graph2[i])
      {
             if(child.first==j)
             {
                    child.second;
             }
      }

///adjacency matrix
//O(N^2)-space complexity
//N!=10^5/N<=10^3
///adjacency list
//S.c-O(N+M)
    }
}

