#include <iostream>
using namespace std;
int main()
{

    int i = 0, n;
    cout << "enter number of rows " << endl;
    cin >> n;

    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}