#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{

    // base condition checking
    if (n == 1)
    {
        return;
    }
    int count = 0;

    // code for bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            count++;
        }
    }

    // above if recursion not happen , control goes to this condition otherwise call the function 'bubblesort'
    if (count == 0)
    {
        return;
    }
    // last element is fixed so again calling recursion for remaining elements
    bubblesort(arr, n - 1);
}

// printing the sorted array
void printbubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {22, 4, 55, 5, 90, 8, 432,4,1,0, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    // calling the bubblesort function

    bubblesort(arr, n);

    cout << endl<< "the sorted array after bubble sorting is :" << endl;
    
    printbubble(arr, n);

    return 0;
}