#include <bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N)
{
    // Your code goes here
    int i, j;

    int flag;

    for (i = 0; i < N; i++)
    {
        flag = 0;

        for (j = 0; j < N - 1; j++)
        {
            if (A[j] == (i + 1))
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << i + 1;
        }
    }

    return -1;
}

int main()
{
    int A[] = {1,2,3,4,5,6,8}, N = 8;

    missingNumber(A, N);

    return 0;
}