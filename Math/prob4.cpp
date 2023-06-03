#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, x = 14, y = 8,gcd;

    for (i = 1; i <= min(x,y); i++)
    {
        if(x%i==0 && y%i==0)
        {
            gcd = i;
        }
    }
    cout<<"gcd of "<<x<<" and "<<y<<" is : "<<gcd<<endl;
    cout<<"lcm is "<<(x*y)/gcd<<endl;

    return 0;
}