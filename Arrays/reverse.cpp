#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str)
{

    int i, j;
    int n = str.size();

    for (i = 0; i < n / 2; i++)
    {
        if (n == 1)
        {
            return str;
        }

        swap(str[i], str[n - i - 1]);
    }

    return str;
}

int main()
{

    string name = "vaibhav";

    string ans  = reverseWord(name);
    cout<<ans;

    
    return 0;
}