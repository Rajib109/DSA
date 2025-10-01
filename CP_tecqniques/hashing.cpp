// give an array a of n integers.given q queries and in each query given a number x, print the number of times x occurs in the array

// constraints: 1<=n,q<=10^5, 1<=a[i],x<=10^5

#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 7;
int hsh[N];

int main()
{

    int count = 0;
    int n;
    cout << "enter size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "enter elements array" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        hsh[arr[i]]++;
    }

    int q;
    cout << "enter number of queries" << endl;
    cin >> q;

    while (q--)
    {
        int x;
        cout << "enter the x to search" << endl;
        cin >> x;
        cout << hsh[x];
    }

    return 0;
}