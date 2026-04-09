#include <bits/stdc++.h>
using namespace std;

int main() {
    int s=7;
    int i=2;
    // checking ith bit is set
    (1<<i) & s;
    // setting ith bit
    (1<<i) | s;
    // clearing ith bit
    ~(1<<i) & s;
    // toggling ith bit
    (1<<i) ^ s;
    // swapping two numbers
    /*
    A=A^B
    B=A^B
    A=A^B
    */
    // check if power of 2
    s>0& (s&(s-1))==0;
    // count set bits
    int count=0;
    while(s){
        s&(s-1);
        count++;
    }
    // set rightmost unset bit
    s=s|(s+1); // this will set rightmost unset bit
    // set or unset rightmost set bit
    s=s&(s-1); //this will unset rightmost set bit
    
    return 0;
}