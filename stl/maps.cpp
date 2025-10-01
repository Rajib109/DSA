#include <bits/stdc++.h>
using namespace std;

void print(auto &m){
    cout << m.size();
    for(auto &value: m){
        cout << value.first << " " << value.second << endl;
    }
}

int main(){

    map<int,string> m;

    m[1]="abs";
    m[1]="pqr"; //existing 1 ki value ko replace karega

    m[4]="efg"; //time complexity of inserting an element is log(N)

    m[3]="srt";

    m.insert({5,"dgs"});

    // print(m);



    auto it = m.find(3); //returns an iterator pointing the key if not present then return end() i.e next to last iterator [time log(n)]

    // if(it==m.end())
    // {
    //     cout << "no value";
    // }
    // else
    // {
    //     cout << (*it).first << " " <<(*it).second;
    // }


    
    if (it != m.end())
    {
        m.erase(it); //we can give key in place of it also and we can not give any thing out of map range it will give segmentation fault
    }
    m.clear(); //clears map

    // time complexity depends on keys of map because keys ki comparisons hoti hai
    
return 0;
}