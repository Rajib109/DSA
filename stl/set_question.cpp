
#include <bits/stdc++.h>
using namespace std;

void print(auto &st)
{
    for (auto val : st)
    {
        cout << val << endl;
    }
}

int main()
{

    // print the given strings in lexographical order
    int n;
    cout << "enter the number of elements" << endl;
    cin >> n;

    cout << "enter string elements" << endl;
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        s.insert(st);
    }

    for (auto val : s)
    {
        cout << val << endl;
    }
    print(s);

    // check if the element present in the set

    cout << "enter string to search";
    string sr;
    cin >> sr;

    if (s.find(sr) == s.end())
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }

    return 0;
}