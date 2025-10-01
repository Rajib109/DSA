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

    string s1;
    string s2;

    int ans = 0;
    cin >> s1 >> s2;
    lower(s1);
    lower(s2);

    int n = s1.size();

    for (int i = 0; i < n; i++)
    {
        if (s1[i] < s2[i])
        {
            ans = -1;
            break;
        }
        if (s1[i] > s2[i])
        {
            ans = 1;
            break;
        }
    }
    cout << ans;

    return 0;
}