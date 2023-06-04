#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{

    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (i <= high - 1 && arr[i] <= pivot)
        {
            i++;
        }

        while (j >= low + 1 && arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}
// Function to sort an array using quick sort algorithm.
void quickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int j;
    j = partition(arr, low, high);
    quickSort(arr, low, j - 1);
    quickSort(arr, j + 1, high);
}

void printarray(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int arr[]={7,434,232,676,21,4,11,433} , n = 8 , low = 0 , high = n-1;
    
    quickSort(arr,low,high);
    printarray(arr,n);


    return 0;
}