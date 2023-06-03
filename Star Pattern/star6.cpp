#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i = 1, num, count = 1;
    cout << "enter the number of rows" << endl;
    cin >> num;

    while (i <= num)
    {

        int j = 1;
        while (j <= i)
        {
            cout << count<<" ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}