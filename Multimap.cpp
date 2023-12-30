/*Multimap e jemon multiple key allowed chilo temnivabe multiset er ketre multiple
  values allowed , tara duijonei RED black trees e kaj kore
  multiset e every operation O(logn) e convert hoi jie karon internally red black trees er use hoi
  set and unordered_set er ketre multple values ba same values insert holeo sesh
  prjnto only single unique values e enter kore kintu multiple jto icca same value
  dukale sobgulie show kore, STL e priority queue name akta term ase jeta kina
  sorted order e valuegulake store kore multiple gulake , tbe priority queue er
  jiegie amra multiset use korte pari , priority queue Dijstra,Bfs e  priority queue use
  hoi and amra ciele priority queue er jiegie multiset use korte pari*/
#include<bits/stdc++.h>
using namespace std;
void print(multiset<string>&s)
{
       for(auto it:s)
       {
              cout<<it<<"  ";
       }
       cout<<endl;
      /* for(auto it=s.begin();it!=s.end();it++)
       {
              cout<<(*it)<<"  ";
       }*/
}
int main()
{
       multiset<string>s;
       s.insert("NINJA");//O(log(n))
       s.insert("Jibon");
       s.insert("MRON");
       s.insert("Jibon");
       s.insert("MRON");
       s.insert("Jibon");
       s.insert("Jibon");
       cout<<"Initially the set is :"<<endl;
       print(s);///print function e multiset s take pass korci
       cout<<endl;
       ////Erasing can be happen in two ways
       //First method
       auto it=s.find("Jibon");// O(log(n))
       if(it!=s.end())//mane jdi "Jibon" ke pie jie tahole s.find() ,iterator return korbe mane ai line ta true hoi jabe and First je Jibon ta ase take muche felbe kintu baki jibon ta pore thakbe
       {
              cout<<"Erasing one Jibon element \n"<<endl;
              s.erase(it);//First "Jibon " ta muche jabe and Baki jibon Gula roye jabe
       }
        print(s);///print function e multiset s take pass korci
        cout<<endl;
       //2nd method
       cout<<"Erasing all Jibon elements : "<<endl;
       s.erase("Jibon");///mane Jibon name jara ase tar sbie muche jabe
       print(s);///print function e multiset s take pass korci
}
