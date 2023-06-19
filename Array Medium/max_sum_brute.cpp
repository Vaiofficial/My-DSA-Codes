#include <bits/stdc++.h>
using namespace std;

int stockBuySell(int price[], int n)
{
    // code here

    int maxPro = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (price[j] > price[i])
            {
                maxPro = max(price[j] - price[i], maxPro);
            }
        }
    }

    return maxPro;
}

    int main()
    {
        int arr[] = {111,2334,234,56767,233,22};
        int n = 6;

        int ans = stockBuySell(arr , n);

        cout<<"the max profit is :"<<ans;

        return 0;
    }