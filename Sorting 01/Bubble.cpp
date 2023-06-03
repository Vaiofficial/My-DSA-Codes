#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 10 , arr[] ={2,5,7,9,12,34,5,65,121,90};

   for(int i = 0; i<n; i++)
        {
            for(int j=0;j<n-1; j++)
            {
                if(arr[j] >= arr[j+1])
                {
                    swap(arr[j] , arr[j+1]);
                }
            }
            
        }

        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
   return 0;
}