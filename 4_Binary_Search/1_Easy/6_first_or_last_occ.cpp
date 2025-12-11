#include<bits/stdc++.h>
using namespace std;
int main(){
    //if num[mid]>taget move left
    //if nums[mid]<target move right
    //if nums[mid]==target store that and move left for first occ 
    //                                    move right for last occ
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

    cout<<ans[0]<<" "<<ans[1];
    return 0;
}