#include<bits/stdc++.h>
using namespace std;
//brute
// int shipWithinDays(vector<int>& weights, int days) {
    
//     int maxi=*max_element(weights.begin(),weights.end());
//     int sum=accumulate(weights.begin(),weights.end(),0);
    
//     for(int cap=maxi;cap<=sum;cap++){
//         int dayCount=1,dailyLoad=0;
//         for(int i=0;i<weights.size();i++){
//             if(dailyLoad+weights[i]>cap){
//                 dayCount++;//move to next day
//                 dailyLoad=0;
//             }
//             dailyLoad+=weights[i];//load in that day
//         }
//         if(dayCount<=days) return cap; 
//     }
//     return 0;
// }




//optimal
int shipWithinDays(vector<int>& weights, int days) {
    int ans=0;
    int l=*max_element(weights.begin(),weights.end());
    int r=accumulate(weights.begin(),weights.end(),0);
    while(l<=r){
        int mid=l+(r-l)/2;
        int dayCount=1,dailyLoad=0;
        for(int i=0;i<weights.size();i++){
            //one mistake I migth do is fill first check next, but it should be check first fill next;
            if(dailyLoad+weights[i]>mid){
                dayCount++;//move to next day
                dailyLoad=0;
            }
            dailyLoad+=weights[i];//load in that day
        }
        if(dayCount<=days) {
            ans = mid;
            r=mid-1;
        } 
        else{
            l=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> weights={3,2,2,4,1,4};
    int days = 3;
    int ans=shipWithinDays(weights,days);
    cout<<ans;
    return 0;
}