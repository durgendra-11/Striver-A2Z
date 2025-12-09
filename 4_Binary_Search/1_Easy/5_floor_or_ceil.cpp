#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ceil
    // smallest element >= target
    // same as lower bound


    
    // floor
    // largest element <= target
    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
    int x = 5;
    int n = arr.size();
    int l = 0, r = n - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;
    return 0;
}