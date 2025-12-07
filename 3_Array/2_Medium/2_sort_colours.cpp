#include<bits/stdc++.h>
using namespace std;
int main(){
    
    //Brute
    // one thing you can do is to sort them ----> uses O(nlogn)



    

    //Better
    // vector<int> nums={2,1,0,0,2,1,1,0,0,1,2};
    // vector<int> count(3,0);
    // for(int i : nums){
    //     count[i]++;
    // }
    // int index=0;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<count[i];j++){
    //         nums[index]=i;
    //         index++;
    //     }
    // }
    // for(int i : nums){
    //     cout<<i<<" ";
    // }
    // return 0;





    //optimal
    //Dutch National Flag Algorithm
    vector<int> nums={0,1,1,0,1,2,1,2,0,0,2};
    int n=nums.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    for(int i : nums){
        cout<<i<<" ";
    }


}