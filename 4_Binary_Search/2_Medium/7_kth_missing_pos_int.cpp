#include<bits/stdc++.h>
using namespace std;
//brute
// int findKthPositive(vector<int>& arr, int k) {
//     int n=arr.size();
//     int count=0;
//     for(int num=1;num<=arr[n-1]+k;num++){
//         bool found=false;
//         for(int i=0;i<n;i++){
//             if(num==arr[i]){
//                 found=true;
//             }
//         }
//         if(!found) count++;
//         if(count==k) return num;
//     }
//     return 0;
// }


//better
// int findKthPositive(vector<int>& arr, int k) {
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         if(arr[i]<=k) k++;
//         else break;
//     }
//     return k;
// }


//better
// int findKthPositive(vector<int>& arr, int k) {
//     int n = arr.size();

//     for (int i = 0; i < n; i++) {
//         int missing = arr[i] - (i + 1);

//         // If we found where kth missing lies
//         if (missing >= k) {
//             // It lies before arr[i]
//             //i tells how many non-missing (present) numbers we have before reaching this point.
//             //k tells how many total numbers (including missing ones) we want to count.
//             //Position (counting both present + missing) = k + i
//             return k + i;
//         }
//     }

//     // If k-th missing number is after the last element
//     return k + n;
// }


//optimal
int findKthPositive(vector<int>& arr, int k) {
    int n=arr.size();
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        int missing = arr[mid]-(mid+1);
        if(missing<k){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    //arr[r]+more missing?--> arr[r]+k-missing(r) --> arr[r]+k-(arr[r]-(r+1))
    int ans=k+r+1;
    return ans;
}

int main(){
    vector<int> arr={2,3,4,7,11};
    int k=5;
    int ans=findKthPositive(arr,k);
    cout<<k;
    return 0;
}