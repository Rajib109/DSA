#include <bits/stdc++.h>
using namespace std;

const int m = 1e9 + 7;

int main()
{

    // given t test cases, each test case contains a number n, print its factorial for each test case %m
    // constraints: 1<=t<=10^5, 1<=n<=10^5
    // m=10^9+7

    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
    //     long long fact=1;
    //     for(int i=1;i<=n;i++){
    //         fact=(fact*i)%m;
    //     }
    //     cout<<fact<<endl;
    // }
    // this code will give tle for large values of t and n because the time complexity is O(t*n)

    // precomputing the factorials
    const int N = 1e5 + 10;
    long long fact[N];
    fact[0] = fact[1] = 1;

    for (int i = 2; i < N; i++)
    {
        fact[i] = (fact[i - 1] * i) % m;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }

    // now the code will run in O(t) time

    return 0;
}