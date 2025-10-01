#include <iostream>
using namespace std;

void bubblesort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            } 
        }
        if (!swapped) 
            break;
    }
}

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[5] = {3, 7, 4, 0, 1};

    cout << "Before sorting" << endl;
    printarr(arr, 5);

    bubblesort(arr, 5);

    cout << "After sorting" << endl;
    printarr(arr, 5);

    return 0;
}