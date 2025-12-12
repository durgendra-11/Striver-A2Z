#include <bits/stdc++.h>
using namespace std;

// brute
// double minMaxDist(vector<int> &stations, int K)
// {
//     int n = stations.size();
//     vector<int> howMany(n - 1, 0); // howMany[i] = number of stations placed between stations[i] & stations[i+1]

//     // Place K extra gas stations
//     for (int k = 0; k < K; k++)
//     {
//         double maxSection = -1;
//         int idx = -1;
//         // Find the segment currently having the largest section length
//         for (int i = 0; i < n - 1; i++)
//         {
//             double diff = stations[i + 1] - stations[i];
//             double section = diff / (howMany[i] + 1.0);
//             if (section > maxSection)
//             {
//                 maxSection = section;
//                 idx = i;
//             }
//         }
//         // Place a station in the worst (largest) segment
//         howMany[idx]++;
//     }
//     // After placing all stations, find the maximum section length
//     double ans = -1;
//     for (int i = 0; i < n - 1; i++)
//     {
//         double diff = stations[i + 1] - stations[i];
//         double section = diff / (howMany[i] + 1.0);
//         ans = max(ans, section);
//     }
//     return ans;
// }






// better
//  double minMaxDist(vector<int> &stations, int K) {
//      int n = stations.size();
//      vector<int> howMany(n - 1, 0);
//      // Max heap: (segment length, index)
//      priority_queue<pair<long double, int>> pq;
//      // INITIALIZE the pq with all original segments
//      for (int i = 0; i < n - 1; i++) {
//          long double dist = stations[i + 1] - stations[i];
//          pq.push({dist, i});
//      }
//      // Place K additional gas stations
//      for (int gas = 1; gas <= K; gas++) {
//          auto top = pq.top();
//          pq.pop();
//          int idx = top.second;
//          // Add one gas station to this segment
//          howMany[idx]++;
//          long double totalDist = stations[idx + 1] - stations[idx];
//          long double newLength = totalDist / (howMany[idx] + 1);
//          pq.push({newLength, idx});
//      }
//      return pq.top().first;
//  }






// optimal
double minMaxDist(vector<int> &stations, int K)
{
    int n = stations.size();

    long double l = 0;
    long double r = 0;
    for (int i = 1; i < n; i++)
    {
        r = max(r, (long double)(stations[i] - stations[i - 1]));
    }

    long double diff = 1e-6;
    while (r - l > diff)
    {
        // max allowed distance
        long double mid = (l + r) / (2.0);

        // count number of stations required to fill the max allowed distance
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            int numberInBetween = (stations[i] - stations[i - 1]) / mid;
            if (stations[i] - stations[i - 1] == numberInBetween * mid)
            {
                numberInBetween--;
            }
            count += numberInBetween;
        }

        if (count > K)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    return r;
}

int main()
{
    vector<int> stations = {1, 13, 17, 23};
    int k = 5;
    int ans = minMaxDist(stations, k);
    cout << ans;
    return 0;
}