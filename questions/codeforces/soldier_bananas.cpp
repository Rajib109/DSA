#include <bits/stdc++.h>
using namespace std;
int main()
{

    int k, n, w;

    cin >> k >> n >> w;

    long long int totalCost = k * (w * (w + 1) / 2);

    cout << totalCost - n << endl;

    return 0;
}