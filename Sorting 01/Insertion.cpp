#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 2, 5, 7, 88, 33, 11, 45, 1, 233}, n = 10;

    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = arr[i];

        while (j > -1 && arr[j] > x)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}