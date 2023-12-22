#include<bits/stdc++.h>
using namespace std;
int main()
{
       //declaring a map
       map<int,string>m;//mane map er key ta integer and value ta string
       //insert some key value pairs into the map
       m[1]="one";
       m[2]="two";
       m[3]="three";
       m[4]="four";
       //Access and print values from the map
       for(const auto& it:m)
       {
              cout<<"KEY IS : "<<it.first<<" , Value : "<<it.second<<endl;
       }
       return 0;
}
