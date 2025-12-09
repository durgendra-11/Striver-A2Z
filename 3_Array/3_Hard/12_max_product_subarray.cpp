#include <bits/stdc++.h>
using namespace std;
int main()
{
    // brute
    //  vector<int> nums={-2,3,-4,1,-8};
    //  int n=nums.size();
    //  int maxpro=INT_MIN;
    //  for(int i=0;i<n;i++){
    //      int pro=1;
    //      for(int j=i;j<n;j++){
    //          pro*=nums[j];
    //          maxpro=max(maxpro,pro);
    //      }
    //  }
    //  cout<<maxpro;




    // optimal-1
    vector<int> nums = {-2, 3, -4, 1, -8};
    int n = nums.size();
    int maxPro = INT_MIN;
    int prefixPro = 1, suffixPro = 1;
    for (int i = 0; i < n; i++)
    {
        if (prefixPro == 0)
            prefixPro = 1;
        if (suffixPro == 0)
            suffixPro = 1;
        prefixPro *= nums[i];
        suffixPro *= nums[n - 1 - i];
        maxPro = max(maxPro, max(prefixPro, suffixPro));
    }
    cout << maxPro;
    return 0;




    // optimal-2
    // vector<int> nums = {-2, 3, -4, 1, -8};
    // int n = nums.size();
    // int maxPro = nums[0];
    // int minPro = nums[0];
    // int ans = nums[0];

    // for (int i = 1; i < n; i++)
    // {
    //     if (nums[i] < 0)
    //         swap(maxPro, minPro); // Multiply by negative flips max and min

    //     maxPro = max(nums[i], maxPro * nums[i]);
    //     minPro = min(nums[i], minPro * nums[i]);

    //     ans = max(ans, maxPro);
    // }
    // cout << ans;
    // return 0;
}