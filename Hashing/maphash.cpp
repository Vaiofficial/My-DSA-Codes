#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<endl;
    //pre-compute

    map<int,int>mpp;
    for(int i = 0; i<n;i++)
    {
        mpp[arr[i]]++;
    }

    for(auto it : mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<endl;

    //our query

    cout<<"enter number of times , you want to check"<<endl;
    int q;
    cin>>q;
    cout<<"Enter the number you want to check"<<endl;
    while (q--) 
    {
        int number;
        cin>>number;

        // fetch
        cout<<mpp[number]<<endl;
    
    }
    

    return 0;
}