#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    // pushing the first element of the array into variable first
    int temp[d], j = 0;

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    // loop to push element one by one to its one position before .
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    // pushing the first element of the array into the last position.
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
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

    int arr[] = {1,2,3,4,5,6,7} , n=7 , d=4;

    leftRotate(arr,n,d);

    cout<<"array after rotation by D place"<<endl;

    printarray(arr,n);


    return 0;
}