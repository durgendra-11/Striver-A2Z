#include<bits/stdc++.h>
using namespace std;
int main(){
    //brute
    // vector<int> nums={4,2,2,6,4};
    // int n=nums.size();
    // int k=6;
    // int count=0;
    // for(int i=0;i<n;i++){
    //     int numxor=0;
    //     for(int j=i;j<n;j++){
    //         numxor=numxor^nums[j];
    //         if(numxor==k){
    //             count++;
    //         }
    //     }
    // }
    // cout<<count;



    
    //optimal
    vector<int> nums={4,2,2,6,4};
    int n=nums.size();
    int k=6;
    int count=0;
    int numxor=0;
    unordered_map<int,int> preXorMap;
    for(int i=0;i<n;i++){
        numxor^=nums[i];
        if(numxor==k){
            count++;
        }
        int rem=numxor^k;
        if(preXorMap.find(rem) != preXorMap.end()){
            count+=preXorMap[rem];
        }
        preXorMap[numxor]++;
    } 
    cout<<count;
    return 0;
}