#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){

// (a+b)%m = (a%m + b%m)%m
// (a-b)%m = (a%m - b%m + m)%m
// (a*b)%m = (a%m * b%m)%m
// (a/b)%m = (a%m * b^-1%m)%m

//example factorial of a number

/*given a numer print its factorial
constraints: 1<=n<=100
m=10^9+7
*/

int n=21;
long long fact=1;
int m=47;
for(int i=1;i<=n;i++){
    fact=(fact*i)%m;
}
cout<<fact<<endl;

//example 3: given a number n, print the nth fibonacci number
//constraints: 1<=n<=10^5
//m=10^9+7

    int n;
    cin >> n;
    
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = (a + b) % MOD;
        a = b;
        b = c;
    }
    
    cout << c << endl;

return 0;
}