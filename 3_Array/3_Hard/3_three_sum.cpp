#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {-2, -1, -2, 2, -1, 0, 0, 2, 2, 0, -1, -2, 2};
    int n = nums.size();

    // brute
    // unordered_set<vector<int>> s;                          // to avoid duplicates
    // vector<vector<int>> ans;
    //  for (int i = 0; i < n; i++) {
    //      for (int j = i + 1; j < n; j++) {
    //          for (int k = j + 1; k < n; k++) {
    //              if (nums[i] + nums[j] + nums[k] == 0) {
    //                  vector<int> temp = {nums[i], nums[j], nums[k]};
    //                  sort(temp.begin(), temp.end()); // sort to handle duplicates
    //                  s.insert(temp);
    //              }
    //          }
    //      }
    //  }

    // for (auto triplet : s) ans.push_back(triplet);

    // // print results
    // for (auto v : ans) {
    //     for (int x : v) cout << x << " ";
    //     cout << endl;
    // }










    // better  ---> hashing
    //  set<vector<int>> st;
    //  for(int i=0;i<n;i++){
    //      set<int> hashset;
    //      for(int j=i+1;j<n;j++){
    //          int third=-(nums[i]+nums[j]);
    //          if(hashset.find(third)!=hashset.end()){
    //              vector<int> temp={nums[i],nums[j],third};
    //              sort(temp.begin(),temp.end());
    //              st.insert(temp);
    //          }
    //          hashset.insert(nums[j]);
    //      }
    //  }
    //  vector<vector<int>> ans(st.begin(),st.end());
    //  for (auto v : ans) {
    //      for (int x : v) cout << x << " ";
    //      cout << endl;
    //  }











    // optimal ----> two pointer
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])
                    j++;
                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
        }
    }
    for (auto v : ans) {
        for (int x : v)
            cout << x << " ";
        cout << endl;
     }

    return 0;
}
