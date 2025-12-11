#include <bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return 0;
    if (nums[0] > nums[1])
        return 0;
    if (nums[n - 1] > nums[n - 2])
        return n - 1;
    int l = 1, r = n - 2;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        // mid is on peak
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
            return mid;
        // mid is on increasing curve --> delete left half
        else if (nums[mid - 1] < nums[mid] && nums[mid] < nums[mid + 1])
            l = mid + 1;
        // mid is on decreasing curve --> delete right half
        else if (nums[mid - 1] > nums[mid] && nums[mid] > nums[mid + 1])
            r = mid - 1;
        // mid is in valley
        else
            r = mid - 1;
    }
    return 0;
}
int main()
{
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};
    int ans=findPeakElement(nums);
    cout<<ans;
    return 0;
}
