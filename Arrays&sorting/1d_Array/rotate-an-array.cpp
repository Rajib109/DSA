#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    queue<int> q;
    for (int i = 0; i < k; i++)
    {
        q.push(nums[nums.size() - 1 - i]);
    }
    while (!q.empty())
    {
        nums.insert(nums.begin(), q.front());
        q.pop();
    }
    nums.erase(nums.end() - k, nums.end());
}

int main()
{

    return 0;
}