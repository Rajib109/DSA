#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    while (n)
    {
        int i = 0;
        int space = (i + n - 1) / 2;
        while (space <= n / 2)
        {
            cout << "* ";
            space++;
        }
        cout << endl;
        n--;
    }
    return 0;
}