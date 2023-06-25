#include <bits/stdc++.h>
using namespace std;

void rotateby90(vector<vector<int>> &matrix, int n)
{
    int i, j;
    // int n = matrix.size();
    // int m  = matrix[0].size();

    for (i = 0; i < n; j++)
    {
        for (j = 0; j < n; j++)
        {
            matrix[j][n - 1 - i] = matrix[i][j];
        }
    }
}

int main()
{

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    int row = matrix.size();
    int col = matrix[0].size();

    rotateby90(matrix, n);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[row][col] << " ";
        }
    }

    return 0;
}