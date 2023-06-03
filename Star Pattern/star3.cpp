#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1, n,count=1;

    cout << "enter the num of rows" << endl; 
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}