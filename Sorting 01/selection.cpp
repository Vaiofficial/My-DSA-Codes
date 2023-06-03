// Selection sort CPP

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int arr[] = {7, 3, 2, 6, 8, 4, 2, 88, 23 , 21}, i, j;


    for (i = 0; i < n-1; i++)
    {
        int min_index = i;
        int min_element = arr[i];
        j = i + 1;

        while (j < n)
        {
            if (arr[j] <min_element)
            {
                min_index = j;
                min_element = arr[j];
            }
            j++;
        }

        arr[min_index] = arr[i];
        arr[i] = min_element;
    }

    cout<<"The sorted array is -"<<endl;
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}