#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{

    int maxPro = 0;
    int mini = INT_MAX;
    int n = prices.size();

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, prices[i]);
        maxPro = max(maxPro, prices[i] - mini);
    }

    return maxPro;
}

int main()
{
    vector<int>arr = {7,1,5,3,6,4};

    int ans = maxProfit(arr);

    cout<< " profit is : "<<ans;

    return 0;
}