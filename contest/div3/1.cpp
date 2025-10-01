#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = stoi(s);
    bool found = false;
    int a, b;

    // Check all possible splits
    // Split after 1 digit: a is first 1 digit, b is next 3
    a = stoi(s.substr(0, 1));
    b = stoi(s.substr(1, 3));
    if ((a + b) * (a + b) == n) {
        cout << a << " " << b << endl;
        return;
    }

    // Split after 2 digits: a is first 2, b is next 2
    a = stoi(s.substr(0, 2));
    b = stoi(s.substr(2, 2));
    if ((a + b) * (a + b) == n) {
        cout << a << " " << b << endl;
        return;
    }

    // Split after 3 digits: a is first 3, b is last 1
    a = stoi(s.substr(0, 3));
    b = stoi(s.substr(3, 1));
    if ((a + b) * (a + b) == n) {
        cout << a << " " << b << endl;
        return;
    }

    // If none found
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}