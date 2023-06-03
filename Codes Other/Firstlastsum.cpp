#include <bits/stdc++.h>
using namespace std;

int main()
{
   int sum, first , last, num;

   cout<<"enter the number"<<endl;
   cin>>num;

   last  = num%10;

    while (num>9)
    {
        num = num/10;
        // cout<<num<<" ";
    }
    cout<<num<<endl;
    first = num;
    cout<<"first number is "<<first<<endl;
    cout<<"last number is "<<last<<endl;

    cout<<"the sum of last and first is :"<<first + last<<endl;
   
   return 0;
}