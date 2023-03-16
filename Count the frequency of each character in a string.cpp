#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>g;
    map<char,int>::iterator it;
    for(ll i=0;i<s.length();i++)
    {
        g[s[i]]++;
    }
    for(it=g.begin();it!=g.end();it++)
    {
        cout<<it->first<<"   "<<it->second<<endl;
    }
}
