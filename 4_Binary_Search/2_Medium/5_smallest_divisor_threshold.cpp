#include<bits/stdc++.h>
using namespace std;
//brute
// int smallestDivisor(vector<int>& nums,int threshold){
//     int maxi=*max_element(nums.begin(),nums.end());
//     int n=nums.size();
//     for(int div=1;div<=maxi;div++){
//         long long sum=0;

//         //calculate sum obtained through that divisor
//         for(int j=0;j<n;j++){
//             long long dividend=(nums[j]+div-1)/div;
//             sum+=dividend;
//         }

//         //check if enough
//         if(sum<=threshold){
//             return div;
//         }
//     }
//     return -1;
// }


//optimal
int smallestDivisor(vector<int>& nums, int threshold) {
    int n=nums.size();
    int ans;
    int l=1;
    int r=*max_element(nums.begin(),nums.end());
    while(l<=r){
        int mid=l+(r-l)/2;
        long long sum=0;
        //calculate sum obtained with div==mid
        for(int i=0;i<n;i++){
            long long dividend = (nums[i]+mid-1)/mid;
            sum+=dividend;
        }
        if(sum<=threshold){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums={1,2,5,9};
    int threshold=6;
    int ans=smallestDivisor(nums,threshold);
    cout<<ans;
    return 0;
}