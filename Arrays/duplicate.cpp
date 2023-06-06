#include <bits/stdc++.h>
using namespace std;

int remove_duplicate(int a[], int n)
{
    // code here

    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (a[i] != a[j])
        {
            a[i + 1] = a[j]; // pushing elements into array
            i++;
        }
    }

    return i+1;
}

int main()
{

    int arr[] = {1,2,2,5,6,9,9,10},n=8;

    cout<< remove_duplicate(arr,n);

    return 0;
}