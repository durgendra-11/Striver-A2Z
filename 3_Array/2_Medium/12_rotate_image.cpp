#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Brute
    // vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    // int n = matrix.size();
    // vector<vector<int>> ans(n, vector<int>(n, 0));

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         ans[i][j] = matrix[n - j - 1][i];
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         matrix[i][j] = ans[i][j];
    //     }
    // }

    // for (int i = 0; i < n i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    //optimal
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    int n = matrix.size();

    //transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){   //careful to apply swap for only upper half
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //reverse each row
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    //print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}