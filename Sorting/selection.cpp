#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n = 10;
    int array[n] = {2, 7, 5, 4, 9, 3, 1, 56, 8, 6};

    for (i = 0; i <= n-2; i++)
    {
        int  min_element= i;
        for (j = i; j <= n-1; j++)
        {
           
            if (array[j] < array[min_element])
            {
                min_element = j;
            }
            swap(array[min_element],array[i]);
        }
    }

    cout << "the array after sorting is :" << endl;

    for (i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
