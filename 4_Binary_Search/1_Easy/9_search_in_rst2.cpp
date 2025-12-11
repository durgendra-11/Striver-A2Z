#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={2,5,6,2,2,2,2};
    int target=3;
    bool found=false;
    int n=nums.size();
    int l=0,r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target){
            found=true;
            break;
        }

        //check for edge case
        if(nums[l]==nums[mid] && nums[mid]==nums[r]){
            l++;
            r--;
        }

        //left half is sorted
        if(nums[l]<=nums[mid]){
            //ans is in left(sorted) half --> dismiss the right half
            if(nums[l]<=target && target<=nums[mid]){
                r=mid-1;
            }
            //ans is in right(unsorted) half --> dismiss the left half
            else{
                l=mid+1;
            }
        }
        //right half is sorted
        else{
            //ans is in right(sorted) half --> dismiss the left half
            if(nums[mid]<=target && target<=nums[r]){
                l=mid+1;
            }
            //ans is in left(unsorted) half --> dismiss the right half
            else{
                r=mid-1;
            }
        }
    }
    cout<<boolalpha;
    cout<<found;
    return 0;
}