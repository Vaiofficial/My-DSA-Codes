#include <bits/stdc++.h>
using namespace std;

void stockBuySell(int price[], int n)
{
    // code here
    bool transac = false;
    for (int i = 0; i < n; i++)
    {
        int buy = i, sell = i;

        while (i < n - 1 && price[i] >= price[i + 1])
        {
            i++;
            buy = i;
        }

        while (i < n - 1 && price[i] <= price[i + 1])
        {
            i++;
            sell = i;
        }

        if (sell - buy > 0)
        {
            cout << "(" << buy << ' ' << sell << ')' << " ";
            transac = true;
        }
    }
    if (transac == false)
        cout << "No Profit";
    cout << '\n';
}

int main()
{

    int arr[] = {100, 180, 260, 310, 40, 535, 695};
    int n = 7;

    stockBuySell(arr , n);

    return 0;
}