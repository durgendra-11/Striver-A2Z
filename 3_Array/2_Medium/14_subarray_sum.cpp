#include <bits/stdc++.h>
using namespace std;
int main()
{

    // brute
    //  vector<int> nums={-1,1,0};
    //  int n=nums.size();
    //  int k=0;
    //  int count=0;
    //  for(int i=0;i<n;i++){
    //      int sum=0;
    //      for(int j=i;j<n;j++){
    //          sum+=nums[j];
    //          if(sum==k){
    //              count++;
    //          }
    //      }
    //  }
    //  cout<<count;
    //  return 0;




    // optimal
    vector<int> nums = {-1, 1, 0, 2, -3, 1};
    int k = 2;
    unordered_map<int, int> prefixCount;
    prefixCount[0] = 1; // base case: sum=0 before starting
    int sum = 0, count = 0;

    for (int num : nums)
    {
        sum += num;
        if (prefixCount.find(sum - k) != prefixCount.end())
        {
            count += prefixCount[sum - k];
        }
        prefixCount[sum]++;
    }

    cout << count;
    return 0;
}