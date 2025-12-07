#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {-3, -2, 4, -2, 4, 1, 0, -3};
    int n = nums.size();

    int maxsum = INT_MIN;
    int sum = 0;

    vector<int> ans;        // stores best subarray
    vector<int> temp;       // stores current subarray

    for (int i = 0; i < n; i++) {
        sum += nums[i];
        temp.push_back(nums[i]);

        if (sum > maxsum) {        // found new best
            maxsum = sum;
            ans = temp;
        }

        if (sum < 0) {             // reset if sum goes negative
            sum = 0;
            temp.clear();
        }
    }

    cout << "Maximum subarray sum: " << maxsum << endl;
    cout << "Subarray: ";
    for (int x : ans)
        cout << x << " ";
    cout << endl;

    return 0;
}
