#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n)
{
    // Code here
    int i;
    vector<int> ans;

    for (i = 0; i < n; i++)
    {
        bool leader = true;

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                leader = false;
                break;
            }
        }

        if (leader)
        {
            ans.push_back(a[i]);
        }
    }

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