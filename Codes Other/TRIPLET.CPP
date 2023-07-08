#include <bits/stdc++.h>
using namespace std;

bool findTriplets(int arr[], int n)
{

    sort(arr, arr + n);
    // int i = 0;

    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] > 0)
            {
                k--;
            }
            else if (arr[i] + arr[j] + arr[k] < 0)
            {
                j++;
            }
            else
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int arr[] = {0, -1, 2, -3, 1};
    int n = 5;

    findTriplets(arr , n);

    return 0;
}