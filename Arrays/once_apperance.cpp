#include <bits/stdc++.h>
using namespace std;

int search(int A[], int N)
{
    // code

    int i, ans = 0;

    for (i = 0; i < N; i++)
    {
        ans = ans ^ A[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1,1,2,2,3,3,4,4,5,5,6},N=11;

    int ans = search(arr,N);

    cout<<ans;

    return 0;
}