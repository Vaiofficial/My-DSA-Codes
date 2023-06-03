#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, gcd, a = 90, b = 100;

    for (i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << "GCD is:" << gcd;
    return 0;
}