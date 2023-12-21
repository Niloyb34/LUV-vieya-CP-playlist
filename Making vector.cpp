#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    vector<int>v= {1,2,3,4,5}; //initializing the vectors with some values
    v.push_back(10);
    v.push_back(25);
    for(i=0;i<v.size();i++)
    {
           cout<<v[i]<<" ";
    }
    cout<<endl;
    v[0]=30;
    v[1]=40;
    v[2]=35;
    for(i=0;i<v.size();i++)
    {
           cout<<v[i]<<" ";
    }
}
