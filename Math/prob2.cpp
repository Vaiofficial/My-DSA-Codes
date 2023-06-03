#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int num = 128, digits;

    // string bits;

    // while (num > 0)
    // {
    //     bits.append(to_string(num % 2));

    //     num = num / 2;
    // }

    // reverse(bits.begin() , bits.end());
    // cout << bits << " ";

    int digit,x=128;
    string bits;

    while (x > 0)
    {
        digit = x % 10;
        bits.append(to_string(digit));
        x /= 10;
    }
    cout << bits;

    return 0;
    return 0;
}