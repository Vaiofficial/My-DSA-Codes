#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, gcd, a = 50, b = 90;

    for (i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }
    cout << "GCD is:" << gcd;
    return 0;
}