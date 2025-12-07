#include <bits/stdc++.h>
using namespace std;
int main()
{
    // brute
    //  generate all perumation, linear search, next index;






    // function
    //  vector<int> nums={1,5,3,2};
    //  next_permutation(nums.begin(),nums.end());
    //  for(int i : nums){
    //      cout<<i<<" ";
    //  }





    
    // optimal
    vector<int> nums = {5, 4, 3, 2, 1};
    int n = nums.size();
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(nums.begin(), nums.end());
        for (int i : nums)
        {
            cout << i << " ";
            return 0;
        }
    }
    for (int i = n - 1; i > index; i--)
    {
        if (nums[i] > nums[index])
        {
            swap(nums[i], nums[index]);
            break;
        }
    }
    reverse(nums.begin() + index + 1, nums.end());
    for (int i : nums)
    {
        cout << i << " ";
    }
    return 0;
}
