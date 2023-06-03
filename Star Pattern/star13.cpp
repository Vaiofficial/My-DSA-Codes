#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n = 5;

    for (i = 0; i < 5; i++)
    {
        

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}