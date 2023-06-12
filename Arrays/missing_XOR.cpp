#include <bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N)
{
    //assigning 0 to all the position of hash array
    int hash[N + 1] = {0};

    //replacning 0 with 1, if the element is present in the array ,  we using hash.
    for (int i = 0; i < N - 1; i++)
    {
        hash[A[i]] = 1;
    }

    //checking if there is 0 in the array! if present it means vo list mai ni tha and usko 1 assign nahi hua , 0 as it is raha.
    for (int i = 1; i <= N; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }

    // return N;
}

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,9,10};
    int N = 10;

    int missing = missingNumber(arr,N);

    cout<<"the missing number is : "<<missing<<endl;

    return 0;
}