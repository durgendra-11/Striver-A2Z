#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxx=*max_element(arr,arr+n);

    //precompute
    int hash[maxx+1]={0};    //initialize with 0
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    cout<<"enter the number whose count you want to find"<<endl;

    //fetch
    int q;
    cin>>q;
    cout<<hash[q];

    return 0;
}