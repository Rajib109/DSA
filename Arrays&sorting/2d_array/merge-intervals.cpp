#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        bool swapped = false;
        for (int j = 0; j < arr.size() - i - 1; j++) 
        {
            if (arr[j + 1][0] < arr[j][0])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            } 
        }
        if (!swapped) 
            break;
    }
}

vector<vector<int>> mergeintervals(vector<vector<int>> &v){
    bubblesort(v);
    
}

void printvect(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    vector<vector<int>> v;

    int n;
    cin >> n ;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 2; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    printvect(v);

    bubblesort(v);

    printvect(v);

return 0;
}