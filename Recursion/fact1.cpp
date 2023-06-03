#include <bits/stdc++.h>
using namespace std;

int main()
{

    int fact = 1 , N=5;
    int next = 2;

    while (fact <= N)
    {
        cout << fact<<" ";

        fact = fact * next;
        next++;
    }
    return 0;
}