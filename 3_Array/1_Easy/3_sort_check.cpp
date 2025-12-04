#include<bits/stdc++.h>
using namespace std;
bool check_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(check_sort(arr,n)) cout<<"sorted";
    else cout<<"not sorted";
    return 0;
}