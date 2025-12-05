#include<bits/stdc++.h>
using namespace std;
int main(){

    //Brute force
    // int arr[]={1,2,3,1,1,1,1,4,2,3};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int len=0;
    // int target=6;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum+=arr[k];
    //         }
    //         if(sum==target) len=max(len,j-i+1);
    //     }
    // }





    // Better
    // int arr[]={1,2,3,1,1,1,1,4,2,3};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int len=0;
    // int target=6;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum+=arr[j];
    //         if(sum==target) len=max(len,j-i+1);
    //     }
    // }





    //more better, prefix_sum+hashmap optimal when both positive and negatives
    // map<long long,int> preSumMap;
    // long long sum=0;
    // int maxlen=0;
    // int len=0;
    // for(int i=0;i<n;i++){
    //     sum+=arr[i];
    //     if(sum==target){
    //         maxlen=max(maxlen,i+1);
    //     }
    //     long long rem=sum-target;
    //     if(preSumMap.find(rem) != preSumMap.end()){
    //         int len=i-preSumMap[rem];
    //         maxlen=max(maxlen,len);
    //     }
    //     if(preSumMap.find(rem)==preSumMap.end()){
    //         preSumMap[sum]=i;
    //     }
    // }
    // cout<<maxlen;





    //optimal
    int arr[]={1,2,3,1,1,1,1,4,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int len=0;
    int target=6;
    int l=0,r=0;
    long long sum=arr[0];
    while(r<n){
        sum+=arr[r];
        while(l<=r && sum>target){
            sum-=arr[l];
            l++;
        }
        if(sum==target){
            len=max(len,r-l+1);
        }
        r++;
    }
    cout<<len<<endl;
    return 0;
}