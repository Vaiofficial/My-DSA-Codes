#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    // code here

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }

        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 1, 2, 0, 0, 0, 0, 1, 2}, n = 10;

    sort012(arr, n);

    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

//TIME AND SPACE COMPLEXITY

//T.C = O(N) - AS WE ARE USING ONLY ONE LOOP FOR MAXIMUM N TIMES.

//S.C = O(1) = AS WE ARE NOT USING ANY EXTRA SPACE HENCE O(1).