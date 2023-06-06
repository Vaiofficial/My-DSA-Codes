#include <bits/stdc++.h>
using namespace std;

bool arraySortedOrNot(int arr[], int n)
{
    //
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
            count++;
    }
    if (count == n - 1)
        return 1;

    else
        return 0;
}

int main()
{

    int arr[]={1,2,3,2,5,6,7,8,9,10},n=10;

    if(arraySortedOrNot(arr,n)==true)
    {
        cout<<1;
    }
    else{
        cout<<0;
    }

    return 0;
}