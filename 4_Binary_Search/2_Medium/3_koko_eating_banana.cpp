#include <bits/stdc++.h>
using namespace std;

//brute
// int minEatingSpeed(vector<int> &piles, int h)
// {
//     int n = piles.size();
//     int maxi=*max_element(piles.begin(),piles.end());
//     for(int k=1;k<maxi;k++)
//     {
//         long long th = 0; // reset total hours for this speed

//         // calculate total hours at current speed k
//         for (int i = 0; i < n; i++)
//         {
//             th += (piles[i] + k - 1) / k; // ceiling division
//         }

//         // if total hours within limit, k is enough
//         if (th <= h) return k;
//     }
//     return 0;
// }



//optimal
int minEatingSpeed(vector<int>& piles, int h) {
    int n=piles.size();
    int k=1;
    int l=1,r=*max_element(piles.begin(),piles.end());
    while(l<=r){
        int mid=l+(r-l)/2;
        long long th=0;

        //calculate total hours at current speed k
        for(int i=0;i<n;i++){
            th+=(piles[i]+mid-1)/mid;
        }
        //th==h is good, but maybe I can go smaller
        if(th<=h){
            k=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return k;
}
int main()
{
    vector<int> piles = {30,11,23,4,20};
    int h = 6;
    int ans=minEatingSpeed(piles,h);
    cout<<ans;
    return 0;
}