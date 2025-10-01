#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >>t;
    while (t--)
    {
        string result;
        for(int i=0; i<3; i++){
            string word;
            cin >>word;
            result +=word[0];
        }
        cout << result << endl;
    }
    

return 0;
}