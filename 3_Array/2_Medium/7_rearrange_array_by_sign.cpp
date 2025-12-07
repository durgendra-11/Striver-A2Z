#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Brute
    // vector<int>nums={3,1,-2,-5,2,-4};
    // int n = nums.size();
    // vector<int> temp1, temp2;
    // for (int i : nums)
    // {
    //     if (i > 0)
    //         temp1.push_back(i);
    //     else
    //         temp2.push_back(i);
    // }
    // int index = 0;
    // for (int i = 0; i < n / 2; i++)
    // {
    //     nums[index++] = temp1[i];
    //     nums[index++] = temp2[i];
    // }
    // return nums;




    
    // optimal
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    int n = nums.size();
    vector<int> result(n);
    int pos_index = 0;
    int neg_index = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            result[pos_index] = nums[i];
            pos_index += 2;
        }
        else
        {
            result[neg_index] = nums[i];
            neg_index += 2;
        }
    }
    for(int i : result){
        cout<<i<<" ";
    }
    return 0;
}