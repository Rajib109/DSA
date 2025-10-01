#include <bits/stdc++.h>
using namespace std;

int main()
{

    // map of pair and vector

    map<pair<int, int>, vector<int>> m;

    m[{1, 2}].push_back(3);
    m[{1, 2}].push_back(4);

    for (const auto& pair : m) {
        cout << "Key: (" << pair.first.first << ", " << pair.first.second << ") -> Values: ";
        for (int val : pair.second) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}