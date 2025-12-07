#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,1,2,1,1,5,1,1,3,2,1,1};
    
    //Better
    // unordered_map<int,int> mpp;
    // int n=nums.size(); 
    // for(int i : nums){
    //     mpp[i]++;
    // }
    // for(auto it : mpp){
    //     if(it.second>n/2){
    //         cout<<it.first;
    //     }
    // }
    

    
    //Optimal
    int cnt = 0, maj = 0;

    for(int i : nums){
        if(cnt==0){
            cnt=1;
            maj=i;
        }
        else if(i==maj){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    int freq = 0;

    for (int num : nums)
        if (num == maj) freq++;
    if (freq > nums.size() / 2)
        cout << maj;
    else
        cout << "No majority element";

    return 0;
}