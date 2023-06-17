#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    // code here

    int count_0 = 0, count_1 = 0, count_2 = 0;

    // counting the number of times , elements appeared

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            count_0++;
        }
        else if (a[i] == 1)
        {
            count_1++;
        }
        else
        {
            count_2++;
        }
    }

    for (int i = 0; i < count_0; i++)
    {
        a[i] = 0;
    }
    for (int i = count_0; i < count_0 + count_1; i++)
    {
        a[i] = 1;
    }
    for (int i = count_0 + count_1; i < n; i++)
    {
        a[i] = 2;
    }
}

int main()
{
    int arr[]={1,2,0,1,2,2,1,0,0,0};
    int n = 10;

    sort012(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

//  TIME COMPLEXITY

//T.C = O(N)+O(N) , FIRST FOR COUNTING AND SECOND ONE IS FOR ASSIGINING POSITION.

//S.C = O(1), AS WE ARE NOT USING ANY EXTRA SPACE.