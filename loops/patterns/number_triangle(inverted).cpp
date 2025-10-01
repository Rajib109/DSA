#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    while(n){
        int j=0;
        while(j<n){
            cout << j << " ";
            j++;
        }
        cout << endl;
        n--;
    }

return 0;
}