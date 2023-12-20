//Adjacency  list representation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,v1,v2,vertices,e;
    cout<<"Enter the vertices : ";
    cin>>vertices;
    vector<vector<int>>v(vertices);//5 mane 5 ti vertex ase
    cout<<"Enter the egdes number:";
    cin>>e;
    for(i=0; i<e; i++)
    {
        cin>>v1>>v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }
    for(i=0; i<v.size(); i++)
    {
        cout<<"Adjacency list of vertex "<<i<<" is : ";
        for(auto t:v[i])
        {
            cout<<t<<" ";
        }
        cout<<endl;
    }
}
