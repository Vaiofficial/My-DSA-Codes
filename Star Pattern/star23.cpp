#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cout<<"enter the size"<<endl;
    cin>>n;

    // first for loop
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }

    // second for loop
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }

        cout<<endl;
    }

    return 0;
}