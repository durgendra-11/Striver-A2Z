#include<bits/stdc++.h>
using namespace std;
//brute
// int aggressiveCows(vector<int> &stalls, int k) {
//     int n=stalls.size();
//     sort(stalls.begin(),stalls.end());
    
//     int ans=1;
//     //ans lies between range 1 to (max-min), we have to find max
//     int diff=stalls[n-1]-stalls[0];
//     for(int dist=1;dist<=diff;dist++){
//         //first cow is placed
//         int count=1;
//         //first cow is placed at first index
//         int lastPos=stalls[0];
//         //calculate the next element which is at gap of atleast dist
//         for(int i=1;i<n;i++){
//             if(stalls[i]-lastPos>=dist){
//                 count++;
//                 lastPos=stalls[i];
//             }
//         }
//         if(count>=k) ans=dist;
//     }
//     return ans;
// }




//optimal
int aggressiveCows(vector<int> &stalls, int k) {
    // code here
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int ans=1;
    //ans lies between range 1 to (max-min), we have to find max
    int l=1,r=stalls[n-1]-stalls[0];
    while(l<=r){
        //first cow is placed at first index
        int mid=l+(r-l)/2;
        int count=1;
    
        int lastPos=stalls[0];
        //calculate the next element which is at gap of atleast dist
        for(int i=1;i<n;i++){
            if(stalls[i]-lastPos>=mid){
                count++;
                lastPos=stalls[i];
            }
        }
        
        if(count>=k){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> stalls={10,1,2,7,5};
    int k=3;
    int ans=aggressiveCows(stalls,k);
    cout<<ans;
    return 0;
}