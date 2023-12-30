#include<bits/stdc++.h>
using namespace std;
void print(set<string>&str)
{
       cout<<"1st method"<<endl;
       for(string value:str)
       {
              cout<<value<<"  ";
       }
       cout<<endl;
       cout<<"2nd method"<<endl;
       for(auto it: str)
       {
              cout<<it<<"  ";
       }
       cout<<"\n3rd method"<<endl;
       for(auto it=str.begin();it!=str.end();it++)
       {
               cout<<(*it)<<"  ";
       }
}
int main()
{
       //ASCII -
/*    A-65 , Z-90 , a =97 , z=122*/
       int n,i;
       cout<<"How many string : ";
       cin>>n;
       string f;
       set<string>str;
       for(i=0;i<n;i++)
       {
              string s;
              cin>>s;
              str.insert(s);
       }
       cout<<"The strings in sorted orders : ";
       for(auto value:str)
       {
              cout<<value<<"   ";
       }
       //Now find an given string in the set
       cout<<"\nEnter which you want to find : ";
       cin>>f;
       cout<<endl;
       auto it=str.find(f);
       if(it!=str.end())
       {
              cout<<(*it)<<endl;
              cout<<"YES FOUND"<<endl;
       }
       else
       {
              cout<<"NOT found"<<endl;
       }
       str.erase("NTON");
       //printing the set;
       print(str);
}

