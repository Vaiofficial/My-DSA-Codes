#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 1;
    int num;

    cout << "enter the number of rows" << endl;
    cin >> num;

    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}