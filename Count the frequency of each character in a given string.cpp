#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>freq;
    //map er karone every lowercase and uppercase uniquely determine ba small letter a and capital letter A alada alada dre dre frequency ber korbo
    map<char,int>::iterator c;///iterator declaration
    for(auto c:s)///mane iterator is c ja kina s string brabor transverse korbe
    {
        freq[c]++;
    }
   for(c=freq.begin();c!=freq.end();c++)
   {
       cout<<c->first<<"  "<<c->second<<endl;
   }
}
