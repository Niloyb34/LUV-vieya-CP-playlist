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
    cout<<"Enter how many strings : ";
    cin>>n;//how many strings
    for(int i=0; i<n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    cout<<"SET is  : "<<endl;
    for(auto value: s)
    {
            cout<<value<<endl;
    }

}
/*Enter how many strings : 4
NILOYBARUA
NILOY
niloybarua
niloyu
SET is  :
NILOY
NILOYBARUA
niloybarua
niloyu
////////////////////////////////////
Enter how many strings : 3
NILOY
NILOYB
NILOYBC
SET is  :
NILOY
NILOYB
NILOYBC

///////////////////////////////////
Enter how many strings : 2
NILOY
NILOYB
SET is  :
NILOY
NILOYB
///////////////////////////////////

In lexicographical order, strings are compared character by character from left to right. The first character that differs determines the order.

Now, comparing "NILOY" and "NILOYB":

The first character is 'N' in both strings.
The second character is 'I' in both strings.
The third character is 'L' in both strings.
The fourth character is 'O' in both strings.
The fifth character is 'Y' in both strings.
At this point, both strings are identical up to the fifth character.
However, "NILOY" has no more characters, while "NILOYB" has an additional
character 'B'. In lexicographical order, an empty string is considered smaller than
any non-empty string. Therefore, "NILOY" comes before "NILOYB" in
lexicographical order.


///////////////////////////////////////////////////////
Enter how many strings : 4
NILOY
NILOYB
NILO
NIl
SET is  :
NILO
NILOY
NILOYB
NIl
//////////////////////////////////////////////////////
Enter how many strings : 4
NILOY          
NILOY
NILOY
MILON
SET is  :  JDIO iccamto akoi name er string input disi kintu set unique string gulake only dekie tie print korce only unique gula NILOY and MILON
MILON
NILOY
*/




