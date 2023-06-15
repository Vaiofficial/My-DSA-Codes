#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++)
    {
        int a = nums[i];
        int find = target - a;

        if (mpp.find(find) != mpp.end())
        {
            return {mpp[find], i};
        }

        mpp[a] = i;
    }

    return {-1, -1};
}

int main()
{

    vector<int>arr = {2,7,11,15};
    int target = 9;

    vector<int>ans = twoSum(arr , target);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}