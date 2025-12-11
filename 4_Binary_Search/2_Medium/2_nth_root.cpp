#include <bits/stdc++.h>
using namespace std;
int nthRoot(int n, int m)
{
    // Code here
    int l = 0, r = m;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        long long num = 1;
        for (int i = 0; i < n; i++)
        {
            num = num * mid;
            if (num > m)
                break;
            // when num>m, it means nth power of mid is greater than m
            // it means mid is nth root of something greater than m
            // it means nth root of m can never be mid, it will
            // be smaller than mid
        }
        
        if (num == m)
            return mid;
        else if (num > m)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main()
{
    cout << "Find nth root of m, enter n and m";
    int n, m;
    cin >> n >> m;
    int ans = nthRoot(n, m);
    cout << ans;
    return 0;
}