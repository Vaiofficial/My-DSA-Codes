#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{

    int i, j, count = 0;
    int n = nums.size();
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        if (nums[i] == 0)
        {
            count = 0;
        }
        if (count > max)
        {
            max++;
        }
    }

    return max;
}

int main()
{
    vector<int>arr = {1,1,0,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,1};

    int max = findMaxConsecutiveOnes(arr);

    cout<<"the maximum time 1 is : "<<max;

    return 0;
}