#include <bits/stdc++.h>
using namespace std;
int main(){

string s="1+2+1+3";

// cin >> s;

vector<int> v;

for(int i=0; i<s.size(); i+=2)
{
    int a = s[i];
    v.push_back(a);
}

sort(v.begin(),v.end());

for(auto it : v)
{
    cout << it << " ";
}

return 0;
}