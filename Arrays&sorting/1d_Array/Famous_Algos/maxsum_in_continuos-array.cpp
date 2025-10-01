#include <bits/stdc++.h>
using namespace std;

int maxSubArray(int nums[], int n)
{
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < n; i++)
    {

        currentSum = max(nums[i], currentSum + nums[i]);

        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main()
{

    int arr[8] = {-1, 2, 4, -2, 4, -7, -3, 0};

    cout << maxSubArray(arr, 8);

    return 0;
}