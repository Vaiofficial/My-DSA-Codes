#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
    {
        
        // Your code here
        
        int maxi = INT_MIN;
        // int sum;
        
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            
            for(int j=i;j<n;j++)
            {
                sum  = sum+arr[j];
                maxi = max(maxi  , sum );
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

//T.C = O(N^2) AS WE ARE USING 2 FOR LOOPS.

// S.C = O(1) AS WE ARE NOT USING ANY EXTRA SPACE.