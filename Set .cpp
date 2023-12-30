/*
map muloto akta key and and oi key er respect e ekta value ke store korto and key
gulake ascending order e store korto ,, akoi set o mulotou key gulake store kore
kintu kono value ke na only key gulake set store kore and asole int er set,string er
set , float er set , double er set
There are 3 types of set
1) Normal_set
2) Unordered_set
3) Multiset
map jemon key gulake sorted order e store kore temni vabe set er modde
kono int rakle seta sorted hoi jie , jtogula  string rakbo segula sob sorted order e store hbe
map er kono element ke access korte hole m[] and map er name.find() aibabe hbe
set er modde o kono particular value ke access korte hole amra set er name.find()
aibabe kore access korte parbo*/

#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s)
{
       cout<<"Icca mto string dukanor por segula jkon sorted hbe in lexicographical tkon"<<endl;
       cout<<"Printing In 1st method : "<<endl;
       for(string value:s)
       {
              cout<<value<<endl;  ///aikane answer gula sorted order e print hbe
       }
       cout<<"Printing In 2nd method : "<<endl;
       for(auto it=s.begin();it!=s.end();++it)
       {
                 cout<<(*it)<<endl;
       }
}
int main()
{
   set<string>s;///create a set of string which name is s
   string value;
   //s.insert("abc");//arokom insertion er time complexity hbe log(n)
   s.insert("abc");//map er mto set er o time complexity akoi mane insertion e map er time complexity chilo log(n) akoivabe set er o time complexity hbe insertion e log(n)
   s.insert("zsdf");//set er kono element ke access korte hle tar time complexity o hbe log(n)
   s.insert("bcd");//mane mot 3 ta string amra input korlam
   s.insert("zadf");
   ///ami akono jtogula value insert disi tar modde jdi konota repeat hoi mone rakba set unique value /element insert hoi set er vitoremane repeat holeo aktie dukbe
   //For finding any value we use below statement1 and set er finding er  complexity hbe log(n)
   // s.find() er complexity hbe log(n)
   //Finding a value
   cout<<"Enter the value that you want to find : ";
   cin>>value;
   //auto it=s.find("abc");//aikane s.find er vitore ase "abc" mane amra tokabo abc ke aikane "abc" ke piele s.find("abc") ata return korbe iterator ar na piele return korbe s.end() jeta mane kicui na mane oi set er s.end()
   auto it=s.find(value);
    if(it!=s.end())
   {
          cout<<" The value that we was finding is found and it is:  "<<(*it)<<endl;
   }
   else
   {
          cout<<"Value not found"<<endl;
   }
   print(s);
   ///If we want to delete something then we will use s.erase
   //je value ta find korcilam takei erase korlam
   if(it!=s.end())
   {
          s.erase(it);///mane it jake represent kore seta set teke muche jabe and bakigula just roye jabe
       //  cout<<"Now if the element that we are finding is found then erase it "<<s.erase(*it)<<endl;
   }
  print(s);
  ///Othoba string ba value take pass koreo set theke erase kora jie
  s.erase("abc");
  print(s);
}
