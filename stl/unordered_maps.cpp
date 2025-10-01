#include <bits/stdc++.h>
using namespace std;

void print(auto &m)
{
    for (auto &value : m)
    {
        cout << value.first << " " << value.second << endl;
    }
}

int main()
{

    unordered_map<int, string> um;

    um[1] = "dkd"; // O(1) complexity, map me pair use kar sakte ho as key but unordered map me nahi isme complex data structures ko keys ki tarah nahi use kr sakte

    um[5] = "gglf";

    um[2] = "fkvm";

    print(um);

    return 0;
}