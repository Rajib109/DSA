#include <bits/stdc++.h>
using namespace std;
int main(){

string s;
getline(cin,s);
int n = s.length();
bool flag = 1;
for(int i = 0; i < n/2; i++){
    if(s[i] != s[n-i-1]){
        flag = 0;
        break;
    }
}
if(flag){
    cout << "Palindrome" << endl;
}
else{
    cout << "Not Palindrome" << endl;
}

return 0;
}