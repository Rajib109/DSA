#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x = 4;
    int *p_x = &x;
    cout << "ad of x " << &x << endl;
    cout << "val of p_x " << p_x << endl;
    cout << "val of x " << *p_x << endl;
    // *p_x = 5;
    // cout << x << endl;
    // p_x=p_x+1;
    // cout << p_x << endl;
    // cout << *p_x;

    // *************************double pointers ********************

    int **p_p_x = &p_x;

    cout << "ad of p_x " << &p_x << endl;
    cout << "val of p_p_x " << p_p_x << endl;
    cout << "val of p_x " << *p_p_x << endl;
    cout << "val of x " << **p_p_x << endl;
    
    return 0;
}