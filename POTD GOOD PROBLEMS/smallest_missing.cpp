#include <bits/stdc++.h>
using namespace std;

//THIS SOLUTION IS USING THE HASH MAP SO EXTRA SPACE IS REQUIRED THEREFORE THE SPACE COMPLEXITY IS O(N);
//TIME COMPLEXITY IS O(N) BECAUSE ONLY SINGLE LOOP IS REQUIRED FOR THE ITERATION;

int missingNumber(int arr[], int n)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (int i = 1; i <= n + 1; i++)
    {
        if (mpp[i] == 0)
            return i;
    }
    return n + 1;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;

    int ans = missingNumber(arr , n);

    cout<< " the missing positive smallest number is : "<<ans;

    return 0;
}