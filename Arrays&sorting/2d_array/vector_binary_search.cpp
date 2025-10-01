#include <bits/stdc++.h>
using namespace std;

bool binarysearch(vector<vector<int, int>> &v, int key)
{
    int m = v.size();
    int n = v[0].size();

    int low = 0;
    int high = m * n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int row = mid / m;
        int coloumn = mid % m;
        if (v[row][coloumn] == key)
        {
            return true;
        }
        else if (v[row][coloumn] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

int main()
{
    int m, n;
    cout << "enter row and col of vector" << endl;
    cin >> m >> n;
    vector<vector<int, int>> v;
    cout << "enter vector elements" << endl;
    for (int i = 0; i < m; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            cin >> temp[j];
        }
    }

    cout << binarysearch(v, 3);

    return 0;
}