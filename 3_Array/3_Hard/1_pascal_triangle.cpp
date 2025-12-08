#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        vector<int> temp;  // start empty
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                temp.push_back(1);
            else
                temp.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
        }
        ans.push_back(temp);
    }

    // print ans
    for (auto &i : ans) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
