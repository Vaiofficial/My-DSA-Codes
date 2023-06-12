#include <bits/stdc++.h>
using namespace std;

int findZeroes(int arr[], int n, int m)
{

    int maxones = 0;
    int start = 0;
    int zerocount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zerocount++;
        }

        while (zerocount > m)
        {
            if (arr[start] == 0)
            {
                zerocount--;
            }
            start++;
        }
        maxones = max(maxones, i - start + 1);
    }
    return maxones;
}

int main()
{

    int arr[]= {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1},n=11,m=2;

    int ans = findZeroes(arr,n,m);

    cout<<ans;
    
    return 0;
}