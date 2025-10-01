#include <bits/stdc++.h>
using namespace std;

void swap(int &n, int &m)
{
    int temp = n;
    n = m;
    m = temp;
}
int main()
{

    int a = 2, b = 3;
    cout << "a: " << a << ", b: " << b << endl;
    swap(a, b);
    cout << "a: " << a << ", b: " << b << endl;

    return 0;
}

// arrays are always passed by refrence we dont need pointers due to pass by refrence functionality
// arrays