#include <iostream>
using namespace std;
int main()
{

    int n, i = 1;
    cout << "enter upto which number you have to print all odds or evens" << endl;

    cin >> n;
    if (i % 2 != 0)
    {
        cout << "Odd : ";
        while (i <= n)
        {
            if (i % 2 != 0)
                cout << i << " ";
            i++;
        }
        i = 2;
        cout << endl;
    }
    if (i % 2 == 0)
    {
        cout << "even : ";
        while (i <= n)
        {
            if (i % 2 == 0)
                cout << i << " ";
            i++;
        }
    }

    return 0;
}