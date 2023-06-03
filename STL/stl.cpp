#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

// Pair Example
int pair01()
{
    pair<int, pair<int, int>> p = {87, {76, 44}};

    return p.first + p.second.first + p.second.second;
}

int main()
{
    // Calling sum
    cout << "the sum is:" << sum(8, 66) << endl;

    // Calling Pair

    cout << "the sum of pair numbers is:" << pair01() << endl;

    return 0;
}