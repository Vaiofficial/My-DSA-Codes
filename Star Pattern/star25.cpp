#include <bits/stdc++.h>
using namespace std;
#include <algorithm>

int main()
{

    int n =5;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {

            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;

            cout << (n -min(min(top, down), min(left, right)));
        }
        cout << endl;
    }

    return 0;
}