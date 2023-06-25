#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &a)
{

    int n = a.size();
    int m = a[0].size();

    vector<int> ans;

    int top = 0, left = 0, right = m - 1, bottom = n - 1;

    while (top <= bottom && left <= right)
    {
        // this is for elements of top row
        for (int i = left; i <= right; i++)
        {
            ans.push_back(a[top][i]);
        }

        top++;

        // this loop is for elements of rightmost coloumn
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(a[i][right]);
        }

        right--;

        // this loop is for bottom row

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(a[bottom][i]);
            }

            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(a[i][left]);
            }

            left++;
        }
    }

    return ans;
}

int main()
{

    vector<vector<int>> mat{{1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12},
                            {13, 14, 15, 16}};

    vector<int> ans = spiralOrder(mat);

    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << " ";
    }

    return 0;
}