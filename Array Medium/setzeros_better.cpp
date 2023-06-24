#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();

    std::vector<int> row(n, 0);
    std::vector<int> col(m, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i]==1|| col[j]==1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{

    vector<vector<int>>vec = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int n = vec.size();
    int m = vec[0].size();

    setZeroes(vec);

    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


//TIME AND SPACE COMPLEXITY

//T.C -  HERE WE ARE USING TWO NESTED LOOP HENCE FOR FIRST LOOP COMPLEXITY WILL BE O(N*M) , SIMILLARLY FOR SECOND ONE O(N*M)
// SO T.C WILL BE O(2 N*M) THAT IS O(N*M).\


//S.C - HERE IT IS O(N)+O(M) , N FOR ROWS AND M FOR COLUMNS 