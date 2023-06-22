#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(int N, vector<int> A)
{

    // int n = A.size(); // size of the array.

    // Step 1: Find the break point:
    int ind = -1; // break point
    for (int i = N - 2; i >= 0; i--)
    {
        if (A[i] < A[i + 1])
        {
            // index i is the break point
            ind = i;
            break;
        }
    }

    // If break point does not exist:
    if (ind == -1)
    {
        // reverse the whole array:
        reverse(A.begin(), A.end());
        return A;
    }

    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:

    for (int i = N - 1; i > ind; i--)
    {
        if (A[i] > A[ind])
        {
            swap(A[i], A[ind]);
            break;
        }
    }

    // Step 3: reverse the right half:
    reverse(A.begin() + ind + 1, A.end());

    return A;
}

int main()
{

    vector<int>arr = {1, 2, 3, 6, 5, 4};
    int n = 6;

    arr = nextPermutation( n , arr);

    for(auto it:arr)
    {
        cout<<it<<" ";vcvvvvvmm
    }
    return 0;
}