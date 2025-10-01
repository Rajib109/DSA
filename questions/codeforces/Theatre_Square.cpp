#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m, a;
    cin >> n >> m >> a;
    int temp = n / a + m / a;

    if (temp == a * 2)
    {
        cout << n / a;
    }
    else
    {
        cout << temp;
    }
    return 0;
}