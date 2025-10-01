#include <bits/stdc++.h>
using namespace std;
int main(){

stack<int> s;
s.push(1);
s.push(2);
s.push(3);
cout<<s.top()<<endl; // 3
s.pop(); // 3 removed

queue<int> q;

q.push(1);
q.push(2);
q.push(3);

q.front(); // 1
q.back(); // 3
q.pop(); // 1 removed

return 0;
}