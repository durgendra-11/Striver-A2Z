#include<bits/stdc++.h>
using namespace std;
//brute
// int findPages(vector<int> &arr, int k) {
//     int n = arr.size();
//     int ans = -1;
//     if (k > n) return ans;

//     int l = *max_element(arr.begin(), arr.end());
//     int r = accumulate(arr.begin(), arr.end(), 0);

//     // Linear search replaces binary search
//     for (int mid = l; mid <= r; mid++) {
//         int count = 1;
//         long long pages = 0;

//         // count number of students needed for this 'mid' (capacity)
//         for (int i = 0; i < n; i++) {
//             if (pages + arr[i] > mid) {
//                 count++;
//                 pages = 0;
//             }
//             pages += arr[i];
//         }

//         if (count <= k) {
//             ans = mid;   // valid allocation
//             break;       // smallest possible since we're going from l → r
//         }
//     }

//     return ans;
// }





//optimal
int findPages(vector<int> &arr, int k) {
    // code here
    int n=arr.size();
    int ans=-1;
    if(k>n) return ans;
    
    int l=*max_element(arr.begin(),arr.end());
    int r=accumulate(arr.begin(),arr.end(),0);
    
    while(l<=r){
        int mid=l+(r-l)/2;
        //boy 1 has been alloted books
        int count=1;
        long long pages=0;
        for(int i=0;i<n;i++){
            if(pages+arr[i]>mid){
                count++;
                pages=0;
            }
            pages+=arr[i];
        }
        if(count<=k){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={12,34,67,90};
    int k=2;
    int ans=findPages(arr,k);
    cout<<ans;
    return 0;
}