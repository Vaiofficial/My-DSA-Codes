#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n)
{

    // base case
    if (n == 1)
    {
        return;
    }

    //sorting first n-1 elements

    insertionsort(arr,n-1);

    //insert nth or last remaining item in sorted part

    int last = arr[n-1];  //accessing last element
    int ahead = n-2; //accessing second last element so that compare it by the element "last"


     while (ahead > -1 && arr[ahead] > last)
        {
            arr[ahead+1] = arr[ahead];
            ahead--;
        }
        arr[ahead+1] = last;
}

void printinsertion(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {23,1,56,0,43,666,22,434,2345,44};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionsort(arr,n);

    cout<<endl<<"the array after insertion sorting is :-"<<endl;

    printinsertion(arr,n);

    return 0;
}