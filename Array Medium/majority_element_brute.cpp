#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{

    int count, i, j;

    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (a[i] == a[j])
                count++;
        }

        if (count > size / 2)
            return a[i];
    }
    return -1;
}

int main()
{

    int arr[] = {1, 1, 3, 2, 2, 3, 3, 3, 3, 3};
    int size = 10;

    int ans = majorityElement(arr, size);
    cout << "majority element int the array is :" << ans;

    return 0;
}


//TIME COMPLEXITY 

//T.C = O(N^2) - AS WE ARE USING TWO FOR LOOP ONE FOR SELECTING AN ELEMENT AND SECOND ONE IS FOR CHECKING THAT ELEMENT IN THE ARRAY EXIST OR NOT.


//S.C = O(1) AS WE ARE NOT USING AN EXTRA SPACE.