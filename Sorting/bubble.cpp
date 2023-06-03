#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n = 10;
    int array[n] = {5,4,3,2,1};

    for (int i = 0; i < n; i++)
    {
        int didswap = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                didswap = 1;
            }
        }
        if(didswap==0)
        break;

        cout<<"runs"<<endl;
    }



    for (int i = 0; i < n; i++) //
    {
        cout << array[i] << " ";
    }

    return 0;
}