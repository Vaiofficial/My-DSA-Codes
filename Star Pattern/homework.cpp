#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 1, n, col = 0, num = 1;

    cout << "enter the number of rows" << endl;
    cin >> n;

    while (row <= n)
    {
        while (col <= row - 1)
        {
            cout << num << " ";

            num++;
            col++;
        }

        cout << endl;
        row++;
        col = 0;
    }
    return 0;
}