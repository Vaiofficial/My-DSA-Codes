#include <bits/stdc++.h>
using namespace std;

int searchInSorted(int arr[], int N, int K)
{
    int present = 1;
    int absent =-1;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == K)
        return 1;
    }
    return -1;
}

int main()
{
    int arr[] = {3,5,2,9,12,10},n=6,k=12;
    
    searchInSorted(arr,n,k);

    return 0;
}