#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n,m,l,r;
        cin >>n>>m>>l>>r;
        int count = n-m;
        while (count)
        {
            count--;
            if(r>0){
                r--;
            }
            else{
                l++;
            }
        }
        cout << l << " " << r << endl;
    }
    

return 0;
}