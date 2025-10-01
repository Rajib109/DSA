#include <bits/stdc++.h>
using namespace std;
void lower(string &s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }
}
int main()
{

    string s;
    cin >> s;
    lower(s);
    cout << s;
    return 0;
}