#include <bits/stdc++.h>
using namespace std;

bool linearsearch(int arr[2][3], int key)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    int key = 3;

    cout << linearsearch(arr, 4);

    return 0;
}