#include <bits/stdc++.h>
using namespace std;

int longsubarray(int a[], int n, long long k)
{
    map<long long, int> presum;
    long long sum = 0;
    int maxlen = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }

        int rem = sum - k;
        if (presum.find(rem) != presum.end())
        {
            int len = i - presum[rem];
            maxlen = max(maxlen, len);
        }
        if (presum.find(sum) == presum.end())
        {
            presum[sum] = i;
        }
    }
    return maxlen;
}

int main()
{
    int arr[] = {2,0,0,3}, n = 4, k = 3;

    int ans = longsubarray(arr, n, k);
    cout << ans;

    return 0;
}


//TIME COMPLEXITY

//T.C(ORDERED MAP) = O(N * LOGN)
//T.C(UNORDERED MAP) = O(N*1) BUT IF MORE COLLISION IS THERE(WORST CASE), THEN IT WILL GO O(N*N) = N^2

//SPACE COMPLEXITY

//S.C - EVERY INDEX HAVE INDIVIDUAL PREFIX SUM(WORST CASE) - O(N)