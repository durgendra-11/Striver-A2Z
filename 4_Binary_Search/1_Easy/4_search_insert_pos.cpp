#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;
    int n = nums.size();
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (target < nums[mid])
        {
            right = mid - 1;
        }
        else if (target > nums[mid])
        {
            left = mid + 1;
        }
        else
        {
            cout << mid;
            return 0;
        }
    }
    cout << right + 1;
    return 0;
    return 0;
}