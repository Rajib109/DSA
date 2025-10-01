#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void merge(int arr[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int L[n1];
    int R[n2];
    int k = start;
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[k];
        k++;
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[k];
        k++;
    }

    int i = 0;
    int j = 0;

    while (i < n1 && i < n2)
    {
        if (L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int start, int end)
{
    if (start == end)
        return;
    int mid = start + (end - start) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
int main()
{

    int arr[6] = {3, 7, 1, 4, 6, 0};
    mergesort(arr, 0, 5);
    printarr(arr, 6);
    return 0;
}