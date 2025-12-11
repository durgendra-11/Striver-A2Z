#include<bits/stdc++.h>
using namespace std;

//brute
// int minDays(vector<int>& bloomDay, int m, int k) {
//     long long total = 1LL * m * k;
//     if (total > bloomDay.size()) return -1;

//     int maxi = *max_element(bloomDay.begin(), bloomDay.end());

//     for (int day = 1; day <= maxi; day++) {
//         int n = bloomDay.size();
//         int count = 0, bouquets = 0;

//         // count number of bouquets, possible on that day
//         for (int i = 0; i < n; i++) {
//             if (bloomDay[i] <= day) {
//                 count++;
//                 if (count == k) {
//                     bouquets++;
//                     count = 0;
//                 }
//             } else {
//                 count = 0;
//             }
//         }
//         //check if enough
//         if (bouquets >= m) return day;
//     }

//     return -1;
// }





//optimal
int minDays(vector<int>& bloomDay, int m, int k) {
    long long total = 1LL * m * k;
    if (total > bloomDay.size()) return -1;

    int ans = -1;
    int l = 1;
    int r = *max_element(bloomDay.begin(), bloomDay.end());

    while (l <= r) {
        int mid = l + (r - l) / 2;

        // count number of bouquets, possible on that day
        int count = 0, bouquets = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }


        if (bouquets >= m) {
            ans = mid;      // possible, try smaller day
            r = mid - 1;
        } else {
            l = mid + 1;    // not possible, need more days
        }
    }

    return ans;
}

int main(){
    vector<int> bloomDay={7,7,7,7,12,7,7};
    int m=2;
    int k=3;
    int ans=minDays(bloomDay,m,k);
    cout<<ans;
    return 0;
}