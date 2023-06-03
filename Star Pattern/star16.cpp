#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n = 600;

    for (i = 0; i < n; i++) // n=5
    {
        int j;

        for (j = 0; j < i + 1; j++)
        {
            cout << "*";
            cout<<" ";
        }

        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    for (i = 0; i < n - 1; i++)
    {
        int j;

        for (j = 0; j < n - i - 1; j++)
        {
            cout << "*";
            cout<<" ";
        }

        for (j = 0; j < i + 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}