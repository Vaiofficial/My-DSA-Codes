#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int l, int m, int r)
{
    // Dividing array into two parts
    int len1 = m - l + 1;
    int len2 = r - m;

    // Creating two new arrays to copy the values of the divided arrays into them
    int *array1 = new int[len1];
    int *array2 = new int[len2];

    // Loop to copy values from the left side array to new array 1
    for (int i = 0; i < len1; i++)
    {
        array1[i] = arr[l + i];
    }

    // Loop to copy values from the right side array to new array 2
    for (int i = 0; i < len2; i++)
    {
        array2[i] = arr[m + 1 + i];
    }

    int index1 = 0;
    int index2 = 0;
    int k = l;

    // Merge the two arrays back into the original array
    while (index1 < len1 && index2 < len2)
    {
        if (array1[index1] <= array2[index2])
        {
            arr[k++] = array1[index1++];
        }
        else
        {
            arr[k++] = array2[index2++];
        }
    }

    // Copy the remaining elements from array1
    while (index1 < len1)
    {
        arr[k++] = array1[index1++];
    }

    // Copy the remaining elements from array2
    while (index2 < len2)
    {
        arr[k++] = array2[index2++];
    }

    // Free the dynamically allocated memory
    delete[] array1;
    delete[] array2;
}

void mergeSort(int *arr, int l, int r)
{
    // Base case
    if (l < r)
    {
        int m = l + (r - l) / 2;

        // For the left side array
        mergeSort(arr, l, m);
        // For the right side array
        mergeSort(arr, m + 1, r);
        // To merge both divided parts
        merge(arr, l, m, r);
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 343, 23, 76, 23, 676, 22, 11, 56, 1, 54}, n = 11, l = 0, r = n - 1;

    mergeSort(arr, l, r);
    cout << endl
         << "the sorted array is :" << endl;
    printarray(arr, n);

    return 0;
}