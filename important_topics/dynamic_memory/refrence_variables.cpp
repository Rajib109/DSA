#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i = 5;

    int &j = i;

    j++;

    cout << i;

    // we use this for passing data in function by (pass by refrence) this will not create a copy in func and make changes in original data
    // return by refrence nahi karna chahiye bad practice kyuki jo refrence varible hoga wo func ka local variable hoga aur uske return nahi kar sakte similarly for pointers

    // int n;
    // cin >>n;
    // int arr[n];
    // this is a bad practice because the memory alloted here is stactic and the code may crash because of static overflow for making variable size array we use heap(dynamic memory allocation)

    return 0;
}