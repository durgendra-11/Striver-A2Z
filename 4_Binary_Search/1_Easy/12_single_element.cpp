#include <bits/stdc++.h>
using namespace std;
int main()
{
    // method 1
    // vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    // int n = nums.size();
    // if (n == 1)
    //     return nums[0];
    // if (nums[0] != nums[1])
    //     return nums[0];
    // if (nums[n - 1] != nums[n - 2])
    //     return nums[n - 1];
    // int l = 1, r = n - 2;
    // while (l <= r)
    // {
    //     int mid = l + (r - l) / 2;
    //     if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
    //     {
    //         cout << nums[mid];
    //         break;
    //     }
    //     // now check which half consists of ans

    //     // ans is in left half
    //     if ((mid % 2 == 1 && nums[mid] == nums[mid + 1]) || (mid % 2 == 0 && nums[mid] != nums[mid + 1]))
    //     {
    //         r = mid - 1;
    //     }
    //     // ans is in right half
    //     else
    //     {
    //         l = mid + 1;
    //     }
    // }
    // return 0;



    
    // // method 2
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (mid % 2 == 1)
            mid--;
        // ans is in right half
        if (nums[mid] == nums[mid + 1])
        {
            l = mid + 2;
        }
        // ans is in left half
        else
        {
            r = mid;
        }
    }
    cout << nums[l];
    return 0;
}
