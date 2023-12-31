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
        vector<int> v(n);/*mane aibabe vector er size suddo declare korle kkono v.push_back use korle ta jtogula element dukabe sob kintu n ti 0 er pore dukabe tie seta theke
        bachte amra just directly vector er modde value assign kore dite pari 17 no line e jeta korci*/
        for (int i = 0; i < n; i++)
        {
            cin >> l;
            v[i] = l; // Assign the value directly to the vector at index i
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << "   ";
        }
        cout << endl;  // Add a newline after printing each vector
    }

    return 0;
}
//////////OUTPUT HBE ////////////////
1
7
1 5 6 2 3 4 1
1   5   6   2   3   4   1
