/*Unordered set sekhanei use korbo jekhane amader order ta matter e kore na just
set er modde kono akta element present ase kina seta check korar jnno amra
unordered set use kori aikane set er element gular order maintain hoi na
Given  N strings and Q queries , in each queryyou are given a string
print yes if string is present else print NO
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string>s;//akta unordered set s er modde string value gula rakte parbo
    int n;
    cout<<"Enter how many strings ?? "<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
  /*  for(auto it:s)
    {
        cout<<it<<endl;
    }*/
    int q;
    cin>>q;
    while(q--)
    {
           string str;
           cin>>str;
           if(s.find(str)==s.end())//mane jake tokacci mane str take seta set e present na thakle tkon s.end() return korbe jdi tokie pieto tahole iterator return korto
           {
               cout<<"NO\n";
           }
           else
           {
             cout<<"YES\n";
           }
    }
/*aikaneo amader set er mto unique string e print hbe tbe unordered_map er facilities holo general set er  insertion , erase, find gula hudie log(n) complexity er hoi jabe
kintu unordered_map er subidha holo aikane O(1) complexity use hoi jeta kina best
unordered_set e sorted order e data insert hoi na bron unsorted thake mane
order maintain hoi na unordered_map er ketre
Unordered_map and Unordered_set- use hash tables
general set and general map er ketre amra red black trees use kori
unordered_map and Unordered_set er ketre amra complex data structure jemon
pair<int,int>s   othoba set<int,int>s arokom rakha jabe na karon oder hash function
inbuilt c++ e define nie, external library te hash function gula define ase
//////////
Muloto jekhane only presence check korte hoi sekhane amra
unordered_set use kori karon O(1) complexity tie

*/
}
