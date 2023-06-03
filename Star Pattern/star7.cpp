#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 1, num;

    cout << "enter the number of rows" << endl;
    cin >> num;

    while (row <= num)
    {
        int col = 1, value = row;

        while (col <= row)
        {
            cout << value;
            col++, value++;
        }
        cout << endl;
        row++;
    }

    return 0;
}