#include <bits/stdc++.h>
using namespace std;
int main()
{

    int up = 0, dn = 0;

    string s;

    cin >> s;

    for (char ch : s)
    {
        if (isupper(ch))
        {
            up++;
        }
        else
        {
            dn++;
        }
    }

    for (char &ch : s)
    {
        if (up > dn)
        {
            ch = toupper(ch);
        }
        else
        {
            ch = tolower(ch);
        }
    }

    cout << s;

    return 0;
}