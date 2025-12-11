#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={4,5,6,7,0,1,2};
    int n=nums.size();
    int l=0,r=n-1;
    while(l<r){
        int mid=l+(r-l)/2;
        //pivot is in left half
        if(nums[mid]<=nums[r]){
            r=mid;
        }
        //pivot is in right half
        else{
            l=mid+1;
        }
    }
    //if array is right roatated k times then pivot is at index k
    int ans=l;
    cout<<ans;
    return 0;
}