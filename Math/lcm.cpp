#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 7, b = 31, num;

    if (a % b == 0 || b % a == 0)
    {
        if (a > b)
        {
            cout << "lcm is:" << a;
        }
        else
        {
            cout << "lcm is :" << b;
        }
    }

    else
    {

        cout << "lcm is :" << a * b << endl;
    }
    return 0;
}