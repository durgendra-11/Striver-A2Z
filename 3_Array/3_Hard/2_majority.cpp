#include<bits/stdc++.h>
using namespace std;
int main(){

    //brute
    // vector<int> nums={1,2,1,2,1,3,2,1,2};
    // int n=nums.size();
    // vector<int> ans;
    // //for each element, check if their count is greater than n/3
    // for(int i=0;i<n;i++){
    //     int count=0;
    //     for(int j=0;j<n;j++){
    //         if(nums[j]==nums[i]){
    //             count++;
    //         }
    //     }
    //     if((count>n/3) && (find(ans.begin(),ans.end(),nums[i])==ans.end())){
    //         ans.push_back(nums[i]);
    //     }
    // }
    // //print ans
    // for(int i : ans){
    //     cout<<i<<" ";
    // }
    



    //better
    // vector<int> nums={1,2,1,2,1,3,2,1,2};
    // int n=nums.size();
    // vector<int> ans;
    // unordered_map<int,int> mpp;
    // for(int i : nums){
    //     mpp[i]++;
    // }
    // for(auto it : mpp){
    //     if(it.second>n/3){
    //         ans.push_back(it.first);
    //     }
    // }
    // //print ans
    // sort(ans.begin(),ans.end());
    // for(int i : ans){
    //     cout<<i<<" ";
    // }

    


    //optimal moore voting algorithm
    vector<int> nums={1,1,1,2,2,3,2,1,2};
    int n=nums.size();
    int cnt1=0,cnt2=0;
    int maj1=INT_MIN,maj2=INT_MIN;
    for(int i : nums){
        if(cnt1==0 && i!=maj2){
            cnt1=1;
            maj1=i;
        }
        else if(cnt2==0 && i!=maj1){
            cnt2=1;
            maj2=i;
        }
        else if(i==maj1){
            cnt1++;
        }
        else if(i==maj2){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    //two possible answers are maj1 and maj2
    //manual check both of them
    vector<int> ans;
    cnt1=0,cnt2=0;
    for(int i : nums){
        if(i==maj1) cnt1++;
        if(i==maj2) cnt2++;
    }
    if(cnt1>n/3) ans.push_back(maj1);
    if(cnt2>n/3) ans.push_back(maj2);
    //sort then print ans
    sort(ans.begin(),ans.end());
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}