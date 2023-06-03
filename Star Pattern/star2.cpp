#include <bits/stdc++.h>
using namespace std;

int main()
{

    // SAME PATTER BUT IN REVERSE ORDER

    int i = 1, n;

    cout << "enter the number of rows" << endl;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n-j+1;
            j++;
        }
        cout << endl;
        i++;
        
    }

    return 0;
}