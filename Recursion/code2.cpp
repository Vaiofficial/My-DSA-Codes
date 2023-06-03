#include <bits/stdc++.h>
using namespace std;

int PrintSeries(int i, int N)
{
    if (i < 1)
    {
        return -1;
    }
    PrintSeries(i - 1 , N);
    cout << i << " ";
}

int main()
{
   
   PrintSeries(5,5);

    return 0;
}