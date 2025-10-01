#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int n;
    cin >> n;
    int lck = 0;

    while (n)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            lck++;
        }
        n = n / 10;
    }

    int flag = 0;
    while (lck)
    {
        if (lck % 10 == 4 || lck % 10 == 7)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        lck = lck / 10;
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}