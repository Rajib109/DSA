#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "enter side of square" << endl;
    cin >> n;
    int k = n * n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << k << " ";
            k--;
        }
        cout << endl;
    }

    return 0;
}