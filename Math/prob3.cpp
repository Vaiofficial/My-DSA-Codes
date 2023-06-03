#include <bits/stdc++.h>
using namespace std;

int main()
{

    int digit, rev_number = 0, x=-123;

    while (x!=0)
    {
        digit = x % 10;
        rev_number = (rev_number * 10) + digit;
        x /= 10;
    }

    cout << rev_number;
    return 0;
}