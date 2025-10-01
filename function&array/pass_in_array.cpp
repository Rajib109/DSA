#include <bits/stdc++.h>
using namespace std;

//array size is limited to 1e5 locally and 1e7 globally

void func1(int arr[]){
    arr[0]=5;
}
//aise array ko khali declare kar sakte hai agar wo 1d array ho agr 2d hua to 2nd wala size declare krna padega

void func2(int arr[][20]){
    arr[1][1]=6;
}

// agar cp me array declare krna hai to size hai usko globally declare kr lo isse tumhe uske size ka access mil jayega

int main(){

int arr[2]={1};

return 0;
}