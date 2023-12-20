//Find the adjacency list 
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
       //Declare a 2D vector for the graph,s adjacency list
   vector<vector<int>>adjacencyList;/* mane int value store korte pare amon vector thakbe and arokom vector element hisebe thake arekta vector er modde
   */
   //Resize the outer vector to have 4 elements
   adjacencyList.resize(4);
   //Add some edges to the graph
   adjacencyList[0].push_back(1);//vertex 0 is connected to vertex 1
   adjacencyList[0].push_back(2);
    adjacencyList[1].push_back(2);
    adjacencyList[1].push_back(3);
    adjacencyList[2].push_back(4);
    adjacencyList[3].push_back(4);
    adjacencyList[2].push_back(3);
   //Print the adjacency list
   for(int i=0;i<adjacencyList.size();i++)
   {
          cout<<"Adjacency List of vertex "<<i<<" : ";
          for(auto t:adjacencyList[i])
          {
                 cout<<t<<" ";
          }
              cout<<endl;
   }
 return 0;
}
/*OUTPUT will be
Adjacency List of vertex 0 : 1 2
Adjacency List of vertex 1 : 2 3
Adjacency List of vertex 2 : 4 3
Adjacency List of vertex 3 : 4
*/
