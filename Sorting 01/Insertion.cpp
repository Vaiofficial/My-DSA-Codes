#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 2, 5, 7, 88, 33, 11, 45, 1, 233}, n = 10;

    for (int i = 1; i < n; i++)
    {

        //j refers to leftmost element , from which we start comparing elements e.g- 3 in above array 
        int j = i - 1;
        int x = arr[i];
        //x refers to 2 in the above array

        
        //code for compare values present in left hand side
        //loop end if j crosses 0 (-1) and arr[j] will become greater than x
        //we decrementing j-- because in insertion sort we have compare left side of an array.

        while (j > -1 && arr[j] > x)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }

    //printing the sorted array.
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}