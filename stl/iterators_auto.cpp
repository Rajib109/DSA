#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    vector<int> :: iterator it = v.begin();

    for(it=v.begin(); it !=v.end(); ++it)
    {
        cout <<*it << " ";
    }

vector<pair<int,int>> vp;

vp={{1,2},{3,4},{5,6}};

auto it2 = vp.begin();

cout << (*it2).first << endl;

for(auto &value : vp)
{
    cout << value.first << " " << value.second;
    cout << endl;
}

return 0;
}