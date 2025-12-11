#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={4,5,6,7,0,1,2};
    int target=1;
    int n=nums.size();
    int l=0,r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target){
            cout<<mid;
            return 0;
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
    cout<<-1;
    return 0;
}