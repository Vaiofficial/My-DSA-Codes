#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1, n;

    cout << "enter the number of rows" << endl;
    cin >> n;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << i;
            j++;
        }

        cout << endl;
        i++;
    }
    return 0;
}