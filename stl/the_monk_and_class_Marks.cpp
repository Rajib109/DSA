#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    map<int, multiset<string>> mp;
    for (int i = 0; i < n; i++)
    {
        int m;
        string s;
        cin >> s >> m;
        mp[-1*m].insert(s);
    }
    for(auto &it : mp)
    {
        auto &s = it.second;
        int marks = -1*it.first;
        for(auto &name : s)
        {
            cout << name << " " << marks << endl;
        }
    }

    return 0;
}