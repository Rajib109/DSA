#include <iostream>
using namespace std;

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionsort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[min], arr[i]);
        }
    }
}

int main()
{
    int arr[5] = {3, 7, 4, 0, 1};

    cout << "before sorting" << endl;
    printarr(arr, 5);

    selectionsort(arr, 5);

    cout << "After sorting" << endl;
    printarr(arr, 5);

    return 0;
}