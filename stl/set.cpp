#include <bits/stdc++.h>
using namespace std;

void print(auto &s)
{
    for (auto &value : s)
    {
        cout << value << endl;
    }
}

int main()
{

    // everything same as map just remove the value part of maps

    multiset<string> s;
    s.insert("ans");
    s.insert("sdj");
    s.insert("klj");
    s.insert("abc");
    s.insert("sdj");

    for (auto value : s)
    {
        cout << value << endl;
    }
    // s.erase("sdj");  yaha erase se sare sdj wale delete honge yaha humne key diya par iterator dene pe aisa nahi hoga
    cout << "new" << endl;

    auto it = s.find("sdj");
    s.erase(it); // yaha erase se sirf pahla wala sdj delete hua

    print(s);

    return 0;
}