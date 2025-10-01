#include <bits/stdc++.h>
using namespace std;

bool ifduplicate(int arr[], int size){
    unordered_set<int> st;
    for (int i = 0; i < size; i++)
    {
        if(st.count(arr[i])) return true;
        st.insert(arr[i]);
    }
    return false;
}

int main(){

int arr[5]={1,3,4,5,2};

cout << ifduplicate(arr,5);

return 0;
}