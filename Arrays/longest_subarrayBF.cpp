#include <bits/stdc++.h>
using namespace std;

int longsubarray(int arr[], int k, int n)
{

    int i, sum, maxlen = 0;

    // starting with the first element
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        // adding next element starting from i=0 , i.e first element and checking if sum == k if yes then finding the lenght of the subarray starting from i=0 to the point where we got sum ==15.
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == k)
            {
                maxlen = max(maxlen, j - i + 1);
            }
        }
    }

    return maxlen;
}

int main()
{

    int arr[] = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int n = 6;
    int len = longsubarray(arr, k, n);
    cout << len;

    return 0;
}