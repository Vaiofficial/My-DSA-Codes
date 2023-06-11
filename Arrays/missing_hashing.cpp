#include <bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N)
{
    // Your code goes here

    int hash[N + 1] = {0};

    for (int i = 0; i < N - 1; i++)
    {
        hash[A[i]] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        if (hash[i] == 0)
        {
            cout<<i;
        }
    }

    // return N;
}

int main()
{

    int arr[] = {1,2,4,3,5};
    int N = 6;

    missingNumber(arr,N);

    return 0;
}