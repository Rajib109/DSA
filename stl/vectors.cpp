#include <bits/stdc++.h>
using namespace std;

// always pass vector as a refrence in a function because copying it is
// O(n) an taking too much time
void print(vector<int> &v)
{
    for (auto value : v)
    {
        cout << value;
    }
}

int main()
{

    int n;
    cout << "Enter number of element in vector";
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    print(v);

    return 0;
}