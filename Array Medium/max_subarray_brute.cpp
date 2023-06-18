#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{

    // Your code here

    int maxi = INT_MIN;
    // int sum;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
            }
            maxi = max(maxi, sum);
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

//T.C = O(N^3) AS WE ARE USING 3 FOR LOOPS.

// S.C = O(1) AS WE ARE NOT USING ANY EXTRA SPACE.