#include<bits/stdc++.h>
using namespace std;
int main(){
    //to find min means we have to find the pivot element
    //we have to determine which half has pivot element
    //when the array is sorted it is increasing graph --> when rotated it breaks
    //which means after rotation, all elements greater than last, would be before the pivot
    //we can use this info to determine, which half contains the pivot


    vector<int> nums={4,5,6,7,0,1,2};
    int n=nums.size();
    int l=0,r=n-1;
    while(l<r){
        int mid=l+(r-l)/2;
        //pivot is in left half --> discard the right half, but keep the mid as it can be pivot
        if(nums[mid]<=nums[r]){
            r=mid; //since we are doing r=mid instead of r=mid-1, when l==r it will go on in an infinite loop
        }
        //pivot is in right half --> discard the left half
        else{
            l=mid+1;
        }
    }
    cout<<nums[l];
    return 0;
}