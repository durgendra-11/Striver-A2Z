#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int n = nums.size();
    int target = 0;





    // brute
    //  set<vector<int>> st;
    //  for(int i=0;i<n;i++){
    //      for(int j=i+1;j<n;j++){
    //          for(int k=j+1;k<n;k++){
    //              for(int l=k+1;k<n;k++){
    //                  int sum=nums[i]+nums[j]+nums[k]+nums[l];
    //                  if(sum==target){
    //                      vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
    //                      sort(temp.begin(),temp.end());
    //                      st.insert(temp);
    //                  }

    //             }
    //         }
    //     }
    // }
    // vector<vector<int>> ans(st.begin(),st.end());
    // for (auto v : ans)
    // {
    //     for (int x : v)
    //         cout << x << " ";
    //     cout << endl;
    // }







    //better  ----> hashing
    // set<vector<int>> st;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         set<int> hashset;
    //         for(int k=j+1;k<n;k++){
    //             int fourth=target-(nums[i]+nums[j]+nums[k]);
    //             if(hashset.find(fourth) != hashset.end()){
    //                 vector<int> temp={nums[i],nums[j],nums[k],fourth};
    //                 sort(temp.begin(),temp.end());
    //                 st.insert(temp);
    //             }
    //             hashset.insert(nums[k]);
    //         }
    //     }
    // }
    // vector<vector<int>> ans(st.begin(),st.end());
    // for (auto v : ans)
    // {
    //     for (int x : v)
    //         cout << x << " ";
    //     cout << endl;
    // }






    //optimal ----> two pointers
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(j>i+1 && nums[j]==nums[j-1]){
                continue;
            }
            int k=j+1;
            int l=n-1;
            while(k<l){
                int sum=nums[i]+nums[j]+nums[k]+nums[l];
                if(sum<target){
                    k++;
                }
                else if(sum>target){
                    l--;
                }
                else{
                    vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(k<l && nums[l]==nums[l+1]) l--;
                }
            }
        }
    }


    for (auto v : ans)
    {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}