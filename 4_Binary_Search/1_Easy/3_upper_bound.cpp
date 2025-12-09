#include <bits/stdc++.h>
using namespace std;
int main()
{
    // brute
    // linear search

    // optimal
    //first element > target
    vector<int> arr = {2, 3, 7, 10, 11, 11, 25};
    int target = 11;
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    int ans = n;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > target)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout<<ans;
    return 0;
}