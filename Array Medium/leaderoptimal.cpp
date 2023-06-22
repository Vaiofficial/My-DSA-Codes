#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n)
{

    vector<int> ans;
    int temp = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (temp <= a[i])
        {
            ans.push_back(a[i]);
            temp = a[i];
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    vector<int> ans = leaders(arr, n);

    for(int i = 0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}