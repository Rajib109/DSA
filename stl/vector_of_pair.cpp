#include <bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int,int>> &v)
{
    for(int i=0; i<v.size(); ++i)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main()
{

    pair<int, int> p;

    vector<pair<int, int>> v;

    int n;
    cout << "entr number of elements in vector of pairs\n";
    cin >> n;

        for (int j = 0; j < n; j++)
        {
            int x,y;
            cin >> x >>y;
            v.push_back({x,y});
        }


    printvec(v);

    return 0;
}