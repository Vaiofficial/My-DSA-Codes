#include <bits/stdc++.h>
using namespace std;

void MakeZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> temp = matrix;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (temp[i][j] == 0)
            {
                if (i - 1 >= 0)
                {
                    matrix[i][j] += temp[i - 1][j];
                    matrix[i - 1][j] = 0;
                }

                if (i + 1 < n)
                {
                    matrix[i][j] += temp[i + 1][j];
                    matrix[i + 1][j] = 0;
                }

                if (j - 1 >= 0)
                {
                    matrix[i][j] += temp[i][j - 1];
                    matrix[i][j - 1] = 0;
                }

                if (j + 1 < m)
                {
                    matrix[i][j] += temp[i][j + 1];
                    matrix[i][j + 1] = 0;
                }
            }
        }
    }
}

int main()
{

    vector<vector<int>> vec = {{1, 2, 3, 4}, {5, 6, 0, 7}, {8, 9, 4, 6}, {8, 4, 5, 2}};

    MakeZeros(vec);
    int n = vec.size();
    int m = vec[0].size();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}