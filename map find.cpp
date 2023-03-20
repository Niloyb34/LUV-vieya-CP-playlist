#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
    m.insert({2,30});///age first bracket then second bracket
    m.insert({1,20});
    m.insert({5,30});
    m.insert({11,90});

    int s1=6;///element 1 to find in the map
    int s2=7;///element 2 to find in the map
    int s3=5;///element 3 to find in the map
    cout<<"Element 1 :"<<s1<<endl;
    if(m.find(s1)!=m.end())///mane m.find(s1) dia s1 ke tukabo jdi m.find(s1) er man m.end() er sman na hoi mane tkon pie gese karon na piele m.end() return kore
    {
        ///m.find(s1)!=m.end() mane m.find() dia jdi s1 er man pao jie tbei m.find(s1) m.end() return korbe na
        ///mot ktha m.find(s1)!=m.end() eta true hoile found pabo
        cout<<" :FOUND :Value :"<<m[s1]<<endl;
    }
    else
    {
        cout<<" :Not found : So value will be :"<<m[s1]<<endl;
    }
    cout<<"Element 2:"<<s2<<endl;
    if(m.find(s2)!=m.end())
    {
        cout<<" :FOUND :Value :"<<m[s2]<<endl;
    }
    else
    {
        cout<<" :NOt found : SO value will be :"<<m[s2]<<endl;
    }
    cout<<"Element 3 :"<<endl;
    if(m.find(s3)!=m.end())
    {
        cout<<" :FOUND : vaLUE :"<<m[s3]<<endl;
    }
    else
    {
        cout<<" :NOt found :So value will be:"<<m[s3]<<endl;
    }
}
