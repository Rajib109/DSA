// multiset question

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long count = 0;
        int n;
        cin >> n;
        long long k;
        cin >> k;
        multiset<long long> s;
        for (int i = 0; i < n; ++i)
        {
            long long a;
            cin >> a;
            s.insert(a);
        }

        while (k--)
        {
            auto it = --s.end();
            count += *it;
            long long temp = *it;
            s.erase(it);
            s.insert(floor(temp / 2));
        }
        cout << count;
    }

    return 0;
}