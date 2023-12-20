//ADJACENCY LIST REPRESENTAION
#include<bits/stdc++.h>
using namespace std;
int main()
{
       int i,v1,v2,vertices,edges;
       cout<<"Enter the number of vertices : ";
       cin>>vertices;
       cout<<"Enter the number of edges : ";
       cin>>edges;
       vector<vector<int>>v(vertices);
       /*aikane size ta outer vector v er jnno , internal vector er kono size nie oita dyna
       mically barbe push korar sathe sathe*/
       cout<<"Enter the edges "<<endl;
       for(i=0;i<edges;i++)
       {
              cin>>v1>>v2;
              v[v1].push_back(v2);
              v[v2].push_back(v1);
              ///Creating an undirected graph
              /*INPUTS are:
                                   Enter the number of vertices : 5
                Enter the number of edges : 7
                Enter the edges
                0 1
                0 2
                1 2
                1 3
                 2 3
                 2 4
                 3 4
              */
       }
       for(i=0;i<vertices;i++)
       {
              cout<<"Adjaceny list of vertex " <<i<<"-->";
              for(auto it:v[i])
              {
                     cout<<it<<" ";
              }
              cout<<endl;
       }
       /*OUTPUT WILL BE:
       Adjaceny list of vertex 0-->1 2
      Adjaceny list of vertex 1-->0 2 3
      Adjaceny list of vertex 2-->0 1 3 4
      Adjaceny list of vertex 3-->1 2 4
      Adjaceny list of vertex 4-->2 3
*/
}
/*Enter the number of vertices : 5
Enter the number of edges : 7
Enter the edges
0 1
0 2
1 2
1 3
2 3
2 4
3 4
Adjaceny list of vertex 0-->1 2
Adjaceny list of vertex 1-->0 2 3
Adjaceny list of vertex 2-->0 1 3 4
Adjaceny list of vertex 3-->1 2 4
Adjaceny list of vertex 4-->2 3
*/

