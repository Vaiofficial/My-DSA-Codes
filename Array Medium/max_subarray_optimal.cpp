#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{

    // Your code here

    long long maxi = LONG_MIN;
    // int sum;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        maxi = max(maxi, sum);

        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxi;
}

int main()
{

    int arr[] = {1,2,3,-2,5};
    int n = 5;

    int ans  = maxSubarraySum(arr ,n);

    cout<<"the max max Subarray Sum is : "<<ans<<endl;


    return 0;
}

//TIME AD SPACE COMPLEXITY 

//T.C = O(N) AS WE ARE USING 1 FOR LOOPS.

// S.C = O(1) AS WE ARE NOT USING ANY EXTRA SPACE.