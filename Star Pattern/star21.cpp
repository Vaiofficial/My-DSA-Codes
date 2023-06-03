// E
// E D
// E D C
// E D C B
// E D C B A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n=4;

    for (i = 0; i < n; i++)
    {
        char ch = 'A'+n-1;

        for (int j=0;j<=i;j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }

    return 0;
}