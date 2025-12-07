#include <bits/stdc++.h>
using namespace std;
int main()
{

    // brute
    // vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    // int rows = matrix.size();
    // int cols = matrix[0].size();
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         if (matrix[i][j] == 0)
    //         {
    //             //markrows
    //             for (int j = 0; j < cols; j++)
    //             {
    //                 if (matrix[i][j] != 0)
    //                 {
    //                     matrix[i][j] = -1;
    //                 }
    //             }
    //             //markcols
    //             for (int i = 0; i < rows; i++)
    //             {
    //                 if (matrix[i][j] != 0)
    //                 {
    //                     matrix[i][j] = -1;
    //                 }
    //             }
    //         }
    //     }
    // }

    // //wherever marked -1 convert them to 0
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         if (matrix[i][j]==-1)
    //         {
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }
    
    // //print matrix
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }






    // Better
    // vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    // int rows = matrix.size();
    // int cols = matrix[0].size();

    // vector<int> zerorows(rows, 0);
    // vector<int> zerocols(cols, 0);

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         if (matrix[i][j] == 0)
    //         {
    //             zerorows[i] = 1;
    //             zerocols[j] = 1;
    //         }
    //     }
    // }

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         if (zerorows[i] || zerocols[j])
    //         {
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }






    //optimal
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    int rows = matrix.size();
    int cols = matrix[0].size();

    // vector<int> zerorows(rows, 0); --->matrix[i][0]
    // vector<int> zerocols(cols, 0); --->matrix[0][j]
    int col0=1; 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                //mark the ith row ( ith value of first column)
                matrix[i][0]=0;
                //mark the jth column ( jth value of first row except first element)
                if(j != 0){
                    matrix[0][j]=0;
                }
                else{
                    col0=0;
                }
                
            }
        }
    }
    for(int i=1;i<rows;i++){
        for(int j=1;j<cols;j++){
            if(matrix[i][j] != 0){
                //check for col & row
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0;j<cols;j++){
            matrix[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<rows;i++){
            matrix[i][0]=0;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}