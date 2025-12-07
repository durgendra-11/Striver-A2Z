#include <bits/stdc++.h>
using namespace std;
int main()
{
    //brute
    // for every i = 0 to n{
    //     leader=true;
    //     for j=i+1 to n{
    //         if(a[j>a[i]]){
    //             leader=false
    //             break
    //         }
    //     }
    //     if(leader=true) ans.push_back()
    // }



    //optimal
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    int n = arr.size();
    vector<int> ans;
    int maxi = arr[n - 1];
    ans.push_back(maxi);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= maxi)
        {
            maxi = arr[i];
            ans.push_back(maxi);
        }
    }
    reverse(ans.begin(), ans.end());
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}