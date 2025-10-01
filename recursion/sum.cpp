#include <bits/stdc++.h>
using namespace std;

int sumar(int *arr,int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
    else
    {
        int sum = arr[0] + sumar(arr+1,size-1);
        return sum;
    }
}

int main(){

int arr[5]={1,2,3,4,5};

cout << sumar(arr,5);
return 0;
}