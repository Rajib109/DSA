#include <bits/stdc++.h>
using namespace std;

int getsum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{

    // we use new kryword to allocate memory dynmicaaly this memory is llocated in heap while normally memory is allocated in stack that is called static memory

    char *ch = new char;

    //  for array

    int *arr = new int[5];

    int n;
    cin >> n;

    int *arr2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arr2[i] = data;
    }

    cout << getsum(arr2, n);

    // we have to free heap memopry manually for this use delete keyword

    delete ch;

    delete[] arr;
    delete[] arr2;

    // for creatomg a 2d array

    int m, k;
    cin >> m >> k;

    int **arr3 = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr3[i] = new int[k];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> arr3[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << arr3[i][j];
        }
    }
    // releasing memory

    for (int i = 0; i < n; i++)
    {
        delete[] arr3[i];
    }

    delete[] arr3;

    return 0;
}