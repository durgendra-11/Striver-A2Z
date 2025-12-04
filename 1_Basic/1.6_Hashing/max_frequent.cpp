#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[]={1,2,3,4,4,3,2,3,4,4,5,6,7,8,5,4,2};
    unordered_map<int,int> mpp;
        for(int i : nums){
            mpp[i]++;
        }

        int freq_item = INT_MAX; // start with a large value
        int max_freq = 0;

        for(auto &m : mpp){
            if(m.second > max_freq || 
               (m.second == max_freq && m.first < freq_item)) {
                max_freq = m.second;
                freq_item = m.first;
            }
        }
        cout<<"most frequent item -> "<<freq_item;
    return 0;
}