/*
Given N strings,print unique strings in lexicographical order
N<=10^5
|S|<=100000;
mane onekgula string input hisebe asle amra just unique gula nibo and don,t need to show frequency
tie map use na kore only set use korle hbe*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    int n;
    cin>>n;//how many strings
    for(int i=0; i<n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    cout<<"SET is:--------->>>>>> "<<endl;
    for(auto value: s)
    {
            cout<<value<<endl;
    }

}
5
NILOY
NILOW
niloy
NILOU
NILOo
SET is:--------->>>>>>
NILOU
NILOW
NILOY
NILOo
niloy
