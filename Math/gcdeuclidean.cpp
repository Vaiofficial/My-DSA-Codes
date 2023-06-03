#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 70, b = 10;

    while (a > 0 && b > 0)
    {

        if (a > b)
            a = a % b;

        else
        {
            b = b % a;
        }
    }

    if (a == 0)
    {
        cout << b;
        cout << "this is if" << endl;
    }

    else
    {
        cout << a;
        cout << "this is else" << endl;
    }
}