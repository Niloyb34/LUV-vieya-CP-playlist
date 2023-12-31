#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n;
        vector<int> v; // Remove the initial vector declaration that means vector<int>v(n) ata use kori nie tar mane initially sobgula value 0 nie bron tie initially empty ase tie jie input dibom sob directly 0 tmo index teke vitorer dike dukbe
        for (int i = 0; i < n; i++)
        {
            cin >> l;
            v.push_back(l); // Use push_back to add elements to the vector
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << "   ";
        }
        cout << endl;  // Add a newline after printing each vector
    }

    return 0;
}

///////////////OUTPUT ////////////////////
1
7
1 5 6 2 3 5 6
1   5   6   2   3   5   6
