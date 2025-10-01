#include <bits/stdc++.h>
using namespace std;

// given an array a of n integers .given q queries and in each query given l and r print the sum of array elements from the index l to r inclusive.

int main()
{

    int n, q, sum = 0;
    cout << "enter array size" << endl;
    cin >> n;
    int a[n];
    int pref[n]={0};

    cout << "enter elements" << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];
    }

    cout << "enter number of queries" << endl;
    cin >> q;
    while (q--)
    {
        int l, r;
        cout << "enter range" << endl;
        cin >> l >> r;
        cout << pref[r]-pref[l-1] << endl;
    }

    return 0;
}