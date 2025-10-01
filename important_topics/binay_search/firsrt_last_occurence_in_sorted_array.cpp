#include <iostream>
using namespace std;

int firstoccurence(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            ans = mid;
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return mid;
}

int lastoccurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return mid;
}

int main()
{

    int arr[7] = {1, 2, 3, 3, 3, 4, 5};

    int a= firstoccurence(arr, 7, 3);
    int b= lastoccurence(arr,7,3);

    pair<int, int > p;
    p.first=a;
    p.second=b;

    return 0;
}