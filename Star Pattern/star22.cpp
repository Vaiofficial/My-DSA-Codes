#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n = 5,inspec= 0;

    for (i = 0; i <n; i++)
    {
        for (int j = 0; j <=n - i; j++)
        {
            cout << "*";
        }

        for(int j=0;j<inspec;j++)
        {
            cout<<" ";

        }

        for(int j=0;j<=n-i;j++)
        {
            cout<<"*";
        }
        inspec+=2;
        cout << endl;
    }

    inspec=8;
    for (i = 1; i <=n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << "*";
        }

        for(int j=0;j<inspec;j++)
        {
            cout<<" ";

        }

        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        inspec-=2;
        cout << endl;
    }

    
    return 0;
}