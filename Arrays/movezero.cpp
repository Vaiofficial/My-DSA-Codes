#include <bits/stdc++.h>
using namespace std;
void pushZerosToEnd(int arr[], int n)
{
    // code here

    int j = 0;

    if (n == 1)
    {
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }
}

int printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] << " ";
    }
}

int main()
{
    int arr[] = {2, 0, 0, 4, 1}, n = 5;

    // calling move zero end function
    pushZerosToEnd(arr, n);

    // calling print function
    printarray(arr, n);

    return 0;
}