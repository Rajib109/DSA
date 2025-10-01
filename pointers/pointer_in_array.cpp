#include <bits/stdc++.h>
using namespace std;
int main(){

int a[10];
a[0]=2;
a[1]=4;

cout<<&a <<endl;
cout <<a << endl;

cout << &a[1] <<endl;
cout << *(a+1);

return 0;
}