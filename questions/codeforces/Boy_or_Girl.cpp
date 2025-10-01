#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;

    unordered_set<char> x;

    for (int i = 0; i < s.size(); i++)
    {
        x.insert(s[i]);
    }

    int val = x.size();
    if (val % 2 != 0)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }

    return 0;
}