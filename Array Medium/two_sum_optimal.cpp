#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.first < b.first;
}

vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
{
    // Your code goes here

    vector<pair<int, int>> ans;
    unordered_set<int> s;

    for (int i = 0; i < N; i++)
    {
        s.insert(A[i]);
    }

    for (int i = 0; i < M; i++)
    {
        if (s.find(X - B[i]) != s.end())
        {
            ans.push_back({X - B[i], B[i]});
        }
    }

    sort(ans.begin(), ans.end(), cmp);
    return ans;
}

int main()
{

    int A[] = {1, 2, 4, 5, 7};
    int B[] = {5, 6, 3, 4, 8};
    int X = 9, N = 5 ,M = 5;


    return 0;
}