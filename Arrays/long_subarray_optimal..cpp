#include <bits/stdc++.h>
using namespace std;

//this code only work for array containing 0 and positive number , it will not work for array containing negative number.
//THIS IS A WINDOW SILDING METHOD , KEEPING i STATIC AND MOVING j LIKE THAT.

int longsubarray(int a[], int n, int k)
{
    int left = 0, right = 0;
    long long sum = a[0];
    int maxlen = 0;

    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }
        if (sum == k)
        {
            maxlen = max(maxlen, right - left + 1);
        }
        
        right++;

        if (right < n)
        {
            sum += a[right];
        }
    }

    return maxlen;
}

int main()
{

    int arr[] = {10, 5, 2, 7, 1, 9}, n = 6, k = 15;

    int ans = longsubarray(arr, n, k);

    cout << ans;

    return 0;
}

//TIME COMPLEXITY

//O(2N) - WORST CASE 


//SPACE COMPLEXITY

//O(1)