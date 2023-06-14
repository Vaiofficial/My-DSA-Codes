#include <bits/stdc++.h>
using namespace std;

int findSum(int A[], int N)
{
    int max = INT_MIN;
    int min = INT_MAX;
    int i, j, temp = 0, ans = 0;

    // for finding maximum element.
    for (i = 0; i < N; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
        if (A[i] < min)
        {
            min = A[i];
        }
    }

    // for finding the min element

    // for(i=0;i<N;i++)
    // {
    //     if(A[i]<min)
    //     {
    //         min = A[i];
    //     }
    // }

    return max + min;
}

int main()
{

    int arr[] = {1,2,3,4,5} , n = 5;

    int res = findSum(arr , n);

    cout<<res;

    return 0;
}