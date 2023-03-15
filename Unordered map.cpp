#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string>&m)
{
    cout<<m.size()<<endl;
    for(auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    ///unordered_map<pair<int,int>,string>m;
    /*aibabe pair er sathe unordered map use kora jie na karon pair er kono inbuilt
    hashmap function thake na tie pair er jnno unordered map use kora
    possible na,tie jader hash function internally define take tader jnno unordered map
    use kora onjek beshi beneficial jemon string ,basic data type jemon int ,long long
    double eder hash function internally define kra thake kintu jesob complex data
    structure ase jemon vectors,set,pair,set of set  aigulate hash function
    internally define kora thake na tie oder ketre unordered map use kora jie na
    karon vector jemon duiti vector er modde compare possible and akoi duita set
    er moddeo tie ader jnno compare thakate only general map e ai set vector ke
    key hisebe use kora jie kintu unordered map e use kora jie na*/
   unordered_map<int,string>m;
   m[1]="abc";///T.C--->0(1)
   m[5]="cdc";
   m[3]="acd";
   m[6]="iolssd";
   m[5]="Aniomil";
   ////akane output gula muloto order konorokom mane na iccamto print hoi
   auto it=m.find(7);///TC-->O(1)
   if(it!=m.end())
   {
       m.erase(it);///TC-->O(1) time complexity hbe o(1)
   }
   print(m);
/*jdi kono question e order matter na kore then amader ucit unordered map use kora
karon tathe time save hoi*/


}
