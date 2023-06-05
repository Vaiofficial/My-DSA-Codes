#include <bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n)
{
    // code here

    int first, second;
    first = INT_MIN;
    second = -1; // if all elements in array is same then ans will be -1;

    // this loop helps me to find largest element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            first = arr[i];
        }
    }

    // this loop helps me to find the second largest element;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first && arr[i] > second)
        {
            second = arr[i];
        }
    }

    cout << second;
}

int main()
{

    int arr[] = {32, 56, 2187, 89, 223, 6578, 43, 22, 5, 2}, n = 10;

    print2largest(arr, n);

    return 0;
}