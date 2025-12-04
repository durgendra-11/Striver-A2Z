#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}