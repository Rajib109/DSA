#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{
  cout << "size" << v.size() << endl;
  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i] << " ";
  }
}

int main()
{
  int n;
  cout << "entr number of elements in parent vector \n";
  cin >> n;

  vector<vector<int>> v;

  for (int i = 0; i < n; i++)
  {
    int k;
    cout << "enter number of elements in the child vector \n";
    cin >> k;
    vector<int> temp;
    cout << "enter its elements \n";
    for (int j = 0; j < k; j++)
    {
      int x;
      cin >> x;
      temp.push_back(x);
    }
    v.push_back(temp);
  }
  cout << "printing" << endl;
  for (int i = 0; i < v.size(); ++i)
  {
    print(v[i]);
    cout << endl;
  }

  return 0;
}