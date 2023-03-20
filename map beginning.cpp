#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;///aikane string hocce key and int hocce value for the keys

    m["one"]= 1;///string key er sathe int er relation
    m["two"]= 2;
    m["three"]= 3;
    map<string,int>::iterator it=m.begin();
    while(it!=m.end())
    {
        cout<<" KEY: "<<it->first<<";Value :"<<it->second<<endl;
        it++;
    }
/*aikane answer e one er por three asbe ,karon o>t mane o t er age ase tahole one three and two both teke age asbe lexicographically but two and three
er modde t first character both word er same but three er h>two er w tie h age ase tie three age lexicographically two er theke tie at first one then three then two
print hbe map er ketre ,map er ketre it++ lekha jie but it=it+1 arokom lekha jie na tie wise hlo it++ aibabe lekha */
}
