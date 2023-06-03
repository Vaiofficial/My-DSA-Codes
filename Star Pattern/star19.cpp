#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i,n=5, count = 1;

    for (i = 0; i < n; i++) // 5
    {
        int j;

        for (j = 0; j<i + 1; j++)
        {
            cout << count;
            cout << " ";
            count++;
        }

        cout << endl;
    }
    return 0;
}