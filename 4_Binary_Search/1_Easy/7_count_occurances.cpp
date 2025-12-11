#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={5,7,7,8,8,8,8,10,12};
    int target=8;
    int n=nums.size();
    vector<int> ans={-1,-1};

    //find first occ
    int l=0,r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]<target){
            l=mid+1;
        }
        else if(nums[mid]>target){
            r=mid-1;
        }
        else{
            ans[0]=mid;
            r=mid-1;
        }
    }

    //find last occ
    l=0,r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]<target){
            l=mid+1;
        }
        else if(nums[mid]>target){
            r=mid-1;
        }
        else{
            ans[1]=mid;
            l=mid+1;
        }
    }

    if(ans[0]==-1 || ans[1]==-1){
        cout<<0;
        return 0;
    }

    int freq=ans[1]-ans[0]+1;
    cout<<freq;
    
    return 0;
}