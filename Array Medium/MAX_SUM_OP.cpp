#include <bits/stdc++.h>
using namespace std;

long long pairWithMaxSum(long long arr[], long long N)
{
    if (N < 2)
        return -1;

    long long res = arr[0] + arr[1];
    for (int i = 1; i < N - 1; i++)
        res = max(res, arr[i] + arr[i + 1]);

    return res;
}

int main()
{

    long long arr[] = {4, 3, 1, 5, 6};
    int N = 5;

    int ans = pairWithMaxSum(arr , N);

    cout<<ans;

    return 0;
}

//TIME AD SPACE COMPLEXITY 

//T.C - O(N) AS WE ARE USING OLY ONE LOOP
//SPACE - O(1)