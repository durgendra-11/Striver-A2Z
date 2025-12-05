#include<bits/stdc++.h>
using namespace std;
int main(){
    //using hashing, catch is that it only works when the vector contains only positive

    vector<int> v={1,2,2,6,4,6,1};
    int n=*max_element(v.begin(),v.end())+1;
    vector<int> h(n,0);
    for(int i : v){
        h[i]++;
    }
    for(int i=0;i<n;i++){
        if(h[i]==1){
            cout<<i<<endl;
        }
    }


    //using hash-map
    unordered_map<int,int> mpp;
    for(int i : v){
        mpp[i]++;
    }
    for(auto i : mpp){
        if(i.second==1) cout<<i.first<<endl;
    }


    //using xor
    int x=0;
    for(int i : v){
        x^=i;
    }
    cout<<x;

    return 0;
}