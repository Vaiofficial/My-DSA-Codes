#include <bits/stdc++.h>
using namespace std;

int rotate(int arr[], int k, int n) // 1 2 3 4 5 6 7
{
    // pushing the first element of the array into variable first
    int first = arr[0];

    // loop to push element one by one to its one position before .
    for (int i = 0; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    // pushing the first element of the array into the last position.
    arr[n - 1] = first;
}

int printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7, k = 2;

    // calling rotate function
    rotate(arr, k, n);

    // printing the final array
    printarray(arr,n);

    return 0;
}