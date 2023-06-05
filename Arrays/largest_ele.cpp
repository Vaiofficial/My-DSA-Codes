#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    cout<<maxi;
}

int main()
{

    int arr[] = {55, 2, 1, 78, 10000, 54, 23, 12, 90, 757}, n = 10;

    largest(arr, n);

    return 0;
}