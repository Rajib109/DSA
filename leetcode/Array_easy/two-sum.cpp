#include <bits/stdc++.h>
using namespace std;

pair<int,int> twosum(int arr[], int target, int size){
    unordered_map<int,int> mp;

    for(int i=0;i<size; ++i){
        int remaining = target - arr[i];
        if(mp.count())
    }
}

int main(){

int target = 5;

vector<int> num;

int arr[8] = {8,2,1,2,5,6,3,4};

cout<< twosum(arr,target,8).first << twosum(arr,target).second;

return 0;
}