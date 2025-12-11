#include <bits/stdc++.h>
using namespace std;
int floorSqrt(int n)
{
    int l = 0, r = n;
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (mid * mid == n)
            return mid;
        if (mid * mid > n)
        {
            r = mid - 1;
        }
        else
        {
            ans = mid;
            l = mid + 1;
        }
    }
    return ans;
}
int main()
{
    cout<<"Find square root of..";
    int n;
    cin>>n;
    int ans=floorSqrt(n);
    cout<<ans;
    return 0;
}
            