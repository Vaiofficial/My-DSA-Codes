#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[8] = {3, 1, 4, 4, 5, 2, 6, 1};

   cout<<"lenght of array is:"<<arr.length()<<endl;

   map<int,int>mpp;

   for (int i = 0; i <arr.length(); i++)
   {
    mpp[arr[i]]++;
   }

   for(auto it : mpp)
   {
    cout<<it.first<<" "<<it.second;
   }
   

   return 0;
}