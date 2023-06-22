#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != val)
        {
            nums[count] = nums[i];
            count = count + 1;
        }
    }
    return count;
}

int main()
{

    vector<int>arr = {1,2,3,3,3,4,4,4,4,4,5,6,7,8};
    int n = 4;

    int ans = removeElement(arr , n);
    cout<<ans;

    return 0;
}