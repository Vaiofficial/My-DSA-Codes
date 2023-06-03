#include <bits/stdc++.h>
using namespace std;

void replacebro(int i , int n , int arr[])
{

   if(i>=n/2)
   {
      return;
   }
   swap(arr[i] , arr[n-i-1]);
   replacebro(i+1 , n ,arr);

}
int main(){
   
   int n = 5;
   int arr[5] ={1,3,5,2,6};

   // for(int i; i<n; i++)
   // {
   //    cin>>arr[i];
   // }

   replacebro(0,n,arr);

   for(int i = 0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }


   return 0;
}