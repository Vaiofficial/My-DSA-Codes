#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{

    // int n = nums.size();
    vector<int> pos, neg;

    // int pos = 0 ,neg = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
        else
        {
            pos.push_back(arr[i]);
        }
    }

    int i = 0, j = 0, k = 0;

    while (i < pos.size() && j < neg.size())
    {
        arr[k++] = pos[j++];
        arr[k++] = neg[i++];
    }

    while (j < pos.size())
    {
        arr[k++] = pos[j++];
    }

    while (i < neg.size())
    {
        arr[k++] = neg[i++];
    }

    for(int i = 0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n = 9;

    rearrange(Arr , n);

    return 0;
}


//TIME AND SPACE COMPLEXITY

// T.C = O(N) - AS WE ARE USING SINGLE FOR LOOP FOR ITERATION OVER EACH ELEMENT AND WE ARE USING WHILE LOOPS FOR JUST ASSIGNING THE POSITION TO THE ELEMENTS
// HENCE THEY ARE CONSIDERED AS CONSTAT , THEREFORE T.C IS O(N)

//S.C = O(N) - WE ARE USING TWO AUXILLARY ARRAYS FOR STORING THE POS AND NEG ELEMENTS HENCE O(2) , THEREFORE REMOVING CONSTAT AND HENCE SPACE COMPLEXITY IS O(N)