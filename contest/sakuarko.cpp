#include <bits/stdc++.h>
using namespace std;
int main(){

int t , n;
cin >> t;

int i , j =0;

int k = 0;

while(k <=n && k >= -n)
{
    i=2*k-1;
    j=2*k+1;
    k++;
    if(i==(-n))
    {
        cout << "Sakurako";
    }
    else if (j==n)
    {
        cout << "Kosuke";
    }
    
}

return 0;
}