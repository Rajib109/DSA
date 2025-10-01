#include <bits/stdc++.h>
using namespace std;
int main(){

// print the frequencies of given strings

 int n;
    unordered_map<string, int> m;
    cout << "enterr the number of strings" << endl;
    cin >> n;

    cout << "now enter strings" <<endl;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    for (auto value : m)
    {
        cout << value.first << " " << value.second << endl;
    }

return 0;
}