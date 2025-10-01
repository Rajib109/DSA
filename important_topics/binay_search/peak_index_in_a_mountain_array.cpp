#include <iostream>
using namespace std;

int peakindex(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid + 1] < arr[mid])
        {
            s = mid + 1;
        }
        else if (arr[mid + 1] > arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            return mid;
        }
        mid = (s + e) / 2;
    }
    return mid;
}

int main()
{

    int arr[7] = {5, 6, 7, 8, 4, 3, 2};
    cout << peakindex(arr, 7);

    return 0;
}