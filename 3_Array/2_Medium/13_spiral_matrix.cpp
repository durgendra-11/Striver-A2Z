#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> ans;
    // set boundary limits
    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    // contnue the process untill top is less than or equal to bottom
    // and untill left is less than or equal to right
    while (top <= bottom && left <= right)
    {
        // top boundary
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;
        // right boundary
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;
        // bottom boundary
        for (int i = right; i >= left; i--)
        {
            // when top and bottom are equal, only print top, bottom is
            // repeated
            if (top > bottom)
            {
                break;
            }
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        // left boundary
        for (int i = bottom; i >= top; i--)
        {
            // when left and right are equal, only print left, right is
            // repeated
            if (left > right)
            {
                break;
            }
            ans.push_back(matrix[i][left]);
        }
        left++;
    }
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}