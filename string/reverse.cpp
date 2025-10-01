#include <bits/stdc++.h>
using namespace std;
int main(){

string s;
getline(cin,s);
int n = s.length();
string str_rev;
for(int i = n-1; i >= 0; i--){
    str_rev.push_back(s[i]);
}
cout << str_rev << endl;

return 0;
}