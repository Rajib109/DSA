#include <bits/stdc++.h>
using namespace std;

bool binarysearch(int arr[2][3], int key)
{
    int n = 2;
    int m = 3;
    int low = 0, high = 2 * 3 - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int row = mid / m;
        int col = mid % m;
        if (arr[row][col] == key)
            return true;
        else if (arr[row][col] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
}

int main()
{

    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    cout << binarysearch(arr, 4);

    return 0;
}