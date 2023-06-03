#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, n = 5;

    for (i = 0; i < n; i++)
    {
        char ch = 'E';

        for (ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}
