#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i = 1 , n = 5;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << i << " ";
            j++;
        }

        i++;
        cout << endl;
    }
    return 0;
}