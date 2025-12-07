#include <bits/stdc++.h>
using namespace std;

int main()
{

    //brute
    // vector<int> nums = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};
    // int n = nums.size();
    // int maxcount=1;
    // for(int i=0;i<n;i++){
    //     int x=nums[i];
    //     int count=1;
    //     while(find(nums.begin(),nums.end(),x+1)!=nums.end()){
    //         x++;
    //         count++;
    //     }
    //     maxcount = max(count, maxcount);
    // }
    // cout<<maxcount;


    

    // //better
    // vector<int> nums = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};
    // sort(nums.begin(), nums.end());
    // int n = nums.size();
    // if (n < 2)
    // {
    //     cout << n;
    //     return 0;
    // }
    // int maxcount = 1;
    // int count = 1;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (nums[i] + 1 == nums[i + 1])
    //     {
    //         count++;
    //         maxcount = max(count, maxcount);
    //     }
    //     else if (nums[i] == nums[i + 1])
    //         continue;
    //     else
    //         count = 1;
    // }
    // cout << maxcount;



    //optimal
    vector<int> nums = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};
    int n = nums.size();
    if (n == 0) {
        cout<< n;
        return 0;
    }
    unordered_set<int> st(nums.begin(), nums.end());
    int longest = 1;

    for (auto it : st) {
        // Only start counting if it's the beginning of a sequence
        if (st.find(it - 1) == st.end()) {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end()) {
                x++;
                cnt++;
            }
            longest = max(longest, cnt);
        }
    }
    cout<<longest;
    return 0;
}