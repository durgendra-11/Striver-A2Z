#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,4,5,0,3,7};

    //using hashing, okay approach
    int n=v.size()+1;
    vector<int> h(n,0);
    for(int i=0;i<v.size();i++){
        h[v[i]]++;
    }
    for(int i=0;i<h.size();i++){
        if(h[i]==0){
            cout<<i<<endl;
            break;
        }
    }

    //using sum method
    int sum=n*(n-1)/2;
    int s2=0;
    for(int i : v){
        s2+=i;
    }
    cout<<sum-s2<<endl;

    //usign XOR
    int xor1=0,xor2=0;
    for(int i=0;i<v.size();i++){
        xor1=xor1^(i+1);
        xor2=xor2^v[i];
    }
    int t=xor1 ^ xor2;
    cout<<t;
    return 0;
}