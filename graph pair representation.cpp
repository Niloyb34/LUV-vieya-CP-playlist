#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare a 2D vector of pairs
    vector<vector<pair<int, int>>> g;

    // Resize the outer vector to have 3 rows
    g.resize(3);

    // Resize each inner vector to have 3 pairs
    for (int i = 0; i < g.size(); ++i) {
        g[i].resize(3);
    }

    // Fill in the 2D vector with pairs
    for (int i = 0; i < g.size(); ++i) {
        for (int j = 0; j < g[i].size(); ++j) {
            g[i][j] = make_pair(i, j);  // Example pair values
        }
    }

    // Print the 2D vector of pairs
    for (int i = 0; i < g.size(); ++i) {
        for (int j = 0; j < g[i].size(); ++j) {
            cout << "(" << g[i][j].first << "," << g[i][j].second << ") ";
        }
        cout << endl;
    }

    return 0;
}
(0,0) (0,1) (0,2) 
(1,0) (1,1) (1,2) 
(2,0) (2,1) (2,2)
