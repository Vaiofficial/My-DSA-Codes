#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{

    long long ans = 1;

    for (int i = 0; i < r; i++)
    {
        ans = ans * (n - i);
        ans = ans / i + 1;
    }

    return ans;
}

int pascalTriangle(int r, int c)
{
    int element = nCr(r - 1, c - 1);
    return element;
}

int main()
{
    int r = 5;
    int c = 3;

    int res = pascalTriangle(r,c);

    cout<<"ans is : "<<res;

    return 0;
}