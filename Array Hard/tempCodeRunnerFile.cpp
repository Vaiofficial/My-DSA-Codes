#include <bits/stdc++.h>
using namespace std;

vector<ll> nthRowOfPascalTriangle(int N)
{
    const int M = 1000000007;

    vector<ll> row(N, 0);

    row[0] = 1;

    for (int i = 1; i < N; i++)
    {
        for (int j = i; j > 0; j--)
        {
            row[j] = (row[j] + row[j - 1]) % M;
        }
    }

    return row;
}

int main()
{
    int n = 5;

    vector<ll> ans = nthRowOfPascalTriangle(n);

    for (int i = 0; i < ans.size() ;i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}