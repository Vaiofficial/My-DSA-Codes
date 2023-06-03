#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0,digit,N,i;
    cout << "enter the number" << endl;
    cin >> N;

    i = N;

    while(i > 0) // 12
    {
        digit = i % 10;


        if (N % digit == 0 && digit!=0)
        {
            count++;
        }

        i = i / 10;
    }

    cout<<count;

    return 0;
}