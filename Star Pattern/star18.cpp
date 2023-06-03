#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i,n=2,space = 2*(n-1);


    for(i=1;i<=n;i++)
    {
        int j;

        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }

        for(j=1;j<=space;j++)
        {
            cout<<" ";

        }

        for(j=i;j>=1;j--)
        {
            cout<<"  ";
            cout<<j;
           
        }

        cout<<endl;
        space = space -2;
    }
   

   
   return 0;
}