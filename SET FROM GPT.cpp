#include<bits/stdc++.h>
using namespace std;

void print(set<string>& s)
{
    cout << "Printing In 1st method : " << endl;
    for (const string& value : s)
    {
        cout << value << endl;  // Here, values will be printed in sorted order
    }

    cout << "Printing In 2nd method : " << endl;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << (*it) << endl;
    }
}

int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("zadf");

    auto it = s.find("abc");
    if (it != s.end())
    {
        cout << "The value that we were finding is found, and it is: " << (*it) << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }

    print(s);

    if (it != s.end())
    {
        cout << "Now, if the element that we are finding is found, then erase it: " << (*it) << endl;
        s.erase(it);
    }

    print(s);

    return 0;
}
