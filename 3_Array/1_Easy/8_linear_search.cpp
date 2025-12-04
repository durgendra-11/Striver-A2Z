#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=false;
    int t;
    cin>>t;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            cout<<i;
            flag=true;
            break;
        }
    }
    if(!flag) cout<<"-1";
    return 0;
}