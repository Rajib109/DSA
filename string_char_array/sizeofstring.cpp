#include <bits/stdc++.h>
using namespace std;

int size(string &s)
{
    int count = 0;
    while(s[count] != '\0')
    {
        count++;
    }
    return count;
}

int main(){

string s = "dsjnad";

cout << s.length() << endl;
// or by writing code

cout << size(s);

return 0;
}