#include <bits/stdc++.h>
using namespace std;
int main()
{

    // brute
    //  vector<int> nums={1,6,2,10,3};
    //   int target=7;
    //   int n=nums.size();
    //   pair<int,int> p;
    //   for(int i=0;i<n;i++){
    //      int sum=0;
    //      for(int j=i+1;j<n;j++){
    //          sum=nums[i]+nums[j];
    //          if(sum==target){
    //              p={i,j};
    //              break;
    //          }
    //      }
    //   }
    //   cout<<p.first<<" "<<p.second;







    // better ----> two pointers
    // vector<int> nums = {1, 6, 2, 10, 3};
    // int target = 7;
    // sort(nums.begin(), nums.end());
    // int l = 0, r = nums.size() - 1;
    // pair<int, int> p = {-1,-1};
    // while (l < r)
    // {
    //     int sum = nums[l] + nums[r];
    //     if (sum > target)
    //     {
    //         r--;
    //     }
    //     else if (sum < target)
    //     {
    //         l++;
    //     }
    //     else
    //     {
    //         cout << "possible"<<" ";
    //         p = {l, r};
    //         break;
    //     }
    // }
    // if(p.first == -1 && p.second == -1){
    //     cout<<"not possible";
    //     return 0;
    // }
    // cout << p.first << " " << p.second;
    // return 0;







    // optimal---->using hashmap
    // vector<int> nums = {1, 6, 2, 10, 3};
    // int target = 12;
    // unordered_map<int, int> mpp;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int rem = target - nums[i];
    //     if (mpp.find(rem) != mpp.end())
    //     {
    //         cout << mpp[rem] << " " << i;
    //         return 0;
    //     }
    //     mpp[nums[i]] = i;
    // }
    return 0;
}