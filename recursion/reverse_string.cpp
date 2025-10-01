#include <bits/stdc++.h>
using namespace std;

void reverse(string s, int idx)
{
    if(idx>=s.size())
    {
        return;
    }
    reverse(s, idx + 1);
    cout << s[idx];
}
int main(){

    string s = "ddkakjb";
    reverse(s, 0);

return 0;
}