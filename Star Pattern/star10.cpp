#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0, n;

    cin >> n;

    while (i < n)
    {
        int j = 0;
        while (j <= i)
        {
            cout << "*";
            j++;
        }

        i++;
        cout << endl;
    }

    return 0;
}