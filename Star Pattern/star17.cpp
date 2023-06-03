#include <bits/stdc++.h>
using namespace std;

int main()
{
    

    int i, start = 0,n = 5;;

    for (i = 0; i < n; i++)
    {
        int j;

        if (i % 2 == 0)
        {
            start = 1;
        }
        else
            start = 0;

        for (j = 0; j <= i; j++)
        {
            cout << start;
            cout << ' ';
            start = 1 - start;
        }

        cout<<endl;
    }
    return 0;
}