#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

int binarysearch(int arr[], int key, int size)
{
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2; // Safer way to calculate mid
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key == arr[mid])
        {
            return mid;
        }
    }
    // return -1; // Return -1 if the key is not found
}

int main()
{
    int arr[5] = {3, 7, 9, 0, 1};

    // Sort the array before performing binary search
    sort(arr, arr + 5);

    // Print the sorted array for verification
    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Perform binary search
    int result = binarysearch(arr, 4, 5);

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}