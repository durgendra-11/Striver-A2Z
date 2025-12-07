#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={-2,-3,4,-1,4,0,-3};
    int n=nums.size();


    //brute
    // int maxsum=INT_MIN;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum+=nums[j];
    //         maxsum=max(sum,maxsum);
    //     }
    // }
    // cout<<maxsum;



    //optimal ----> Kadane's Algorithm
    // int maxsum=INT_MIN;
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum+=nums[i];
    //     maxsum=max(sum,maxsum);
    //     if(sum<0) sum=0;
    // }
    // cout<<maxsum;


    //other
    int maxsum=nums[0];
    int sum=nums[0];
    for(int i=1;i<n;i++){
        sum=max(nums[i],sum+nums[i]);
        maxsum=max(sum,maxsum);
    }
    cout<<maxsum;
    return 0;
}