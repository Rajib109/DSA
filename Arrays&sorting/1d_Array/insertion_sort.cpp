#include <iostream>
using namespace std;

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertion_sort(int arr[], int size)
{
    int i, key, j;

    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[5] = {3, 7, 4, 0, 1};

    cout << "Before sorting" << endl; 
    printarr(arr, 5);

    insertion_sort(arr, 5);

    cout << "After sorting" << endl;
    printarr(arr, 5);

    return 0;
}