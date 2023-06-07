#include <bits/stdc++.h>
using namespace std;

int rotate(vector<int> &arr, int k,int n)
{
    k=k%n;
	   if(k==0) {
	       return;
	   }
	   int arr1[k];
	   for(int i=0;i<k;i++) {
	       arr1[i]=arr[i];
	   }
	   for(int i=k;i<n;i++) {
	       arr[i-k]=arr[i];
	   }
	   for(int i=n-k;i<n;i++) {
	       arr[i]=arr1[i-n+k];
	   }
}


int main()
{
    vector<int>arr= {1 ,2 ,3 ,4 ,5 ,6 ,7};
    int n=7,k=2;

    rotate(arr,k);

    return 0;
}