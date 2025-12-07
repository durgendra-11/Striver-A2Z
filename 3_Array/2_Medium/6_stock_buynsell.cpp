#include<bits/stdc++.h>
using namespace std;
int main(){

    //brute
    // maxprofit=0;
    // for(i=0 to n)
    //    for(j=i+1 to n)
    //        profit=arr[j]-arr[i];
    //        maxprofit=max(maxprofit,profit)
    // return maxprofit;

    //optimal
    vector<int> nums={7,1,3,5,4,6,2};
    int min=nums[0];
    int maxprofit=0;
    for(int i=0;i<nums.size();i++){
        if(min<nums[i]){
            int profit=0;
            profit=nums[i]-min;
            maxprofit=max(maxprofit,profit);
        }
        else min=nums[i];
    }
    cout<<maxprofit;
    return 0;
}