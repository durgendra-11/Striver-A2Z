#include<bits/stdc++.h>
using namespace std;
int main(){
    //optimal
    vector<int> nums={2,10,-1,0,11,3,6,7,5};
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int target=3;
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(target<nums[mid]){
            right=mid-1;
        }
        else if(target>nums[mid]){
            left=mid+1;
        }
        else{
            cout<<target;
            return 0;
        }
    }
    return 0;
}