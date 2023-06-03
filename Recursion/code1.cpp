#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num =1,N=10;

    void printNos(int N)
    {
        if(num<=N)
        {
            return 1;
            num = num +1;
        }
        return printNos(int N);
    }
   return 0;
}
