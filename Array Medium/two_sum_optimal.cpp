#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    int left = 0;
    int right = nums.size() - 1;

    // sort(nums.begin() , nums.end());

    while (left < right)
    {
        int sum = nums[left] + nums[right];

        if (sum == target)
        {
            return {left, right};
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return {-1, -1};
}

int main()
{

    vector<int>nums = {2,7,11,15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";


    return 0;
}