#include <bits/stdc++.h>
using namespace std;

int Countpair(int arr[] , int n , int k)
{
    unordered_map<int ,int>mpp;
    int ans = 0;

    for(int i=0;i<n;i++)
    {
        int b = k - arr[i];

        if(mpp[b])
        {
            ans+=mpp[b];
        }

        mpp[arr[i]]++;
    }
    return ans;


}

int main()
{

    int arr[]={1,1,1,1};
    int n =4;
    int k=2;

   int ans =  Countpair(arr,n,k);

   cout<<ans;
   
   return 0;
}