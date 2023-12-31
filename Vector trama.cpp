#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,l,k,m;
        cin>>n;
        vector<int>v(n);/*aikane jdi amra arokom vector<int>v(size)  aibabe jdi bole di size then asole
        by default vector v er modde n ti sunno dukce ga tie jkon amra push
        back korbo tkon asole v er 0 teke n-1 prjnto already 0 tie niche jkon abar push
        korte jabo then asole 0 to n prjnto puran value gula overwrite hocce na bron
        harie jacce
        */
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<"   ";
        }

        /*Tie uporer problem ta nicher mto kora jie jathe amra bujte pari je */
        /*Tkon must be ager vector<int>v(n) er jiegie vector<int>v aibabe use korte hbe tahole
                     initially vector er modde 0 dukbe na tie jkoni nton kisu push korbo just vector
                     er 0 tmo index teke bakigulate dukte thakbe ,tbe aikane already 0 ase vector er
                     size er sman priman, tie nton kisu input dile 0 gular porei dukbe   */
         ///akon nton kono value input dite gele amader ke n tmo index teke push korte hbe
         cout<<"\nHow many elements you want to insert after the 0,s "<<endl;
         cin>>k;
         for(int i=0;i<k;i++)
         {
              cin>>m;
              v.push_back(m);
         }
         for(int i=0;i<n+k;i++)
         {
                cout<<v[i]<<"   ";
         }
    }
}
//////////////////OUTPUT Will be//////////////////
1
7
0   0   0   0   0   0   0
How many elements you want to insert after the 0,s
5
2 3 4 9 6
0   0   0   0   0   0   0   2   3   4   9   6
