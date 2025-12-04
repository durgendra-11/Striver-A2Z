#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,0,0,0,3,0,5};
    int j=0,c=0,n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            v[j]=v[i];
            j++;
        }
        else c++;
    }
    for(int i=n-c;i<n;i++){
        v[i]=0;
    }
    for(int i : v){
        cout<<i<<" ";
    }
    return 0;
}