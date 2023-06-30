#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target)
{
    sort(nums.begin() , nums.end())
    vector<vector<int>>ans;
    int n = nums.size();


    for (int  i = 0; i < n-3; i++)
    {
        if(i>0 && nums[i]==nums[i-1])
        continue;

        for (int j = i+1; j < n-2; j++)
        {
            if (j>i+1 && nums[j]==nums[j-1])
            {
                continue;
            }  
        }

        int targetsum = target - (nums[i] + nums[j]);
        int l = j+1 , h = n-1;

        while (l<h)
        {
            if (nums[l] + nums[h]==targetsum)
            {
                vector<int>output = {nums[i] , nums[j] nums[l] , nums[h]};
                ans.push_back(output);

                while (l<h && nums[l] == nums[l+1])
                {
                    l++;
                }
                while (l<h && nums[h] == nums[h-1])
                {
                    h--;
                }
            }
            else if (nums[l] + nums[h] < targetsum)
            {
                l++;
            }
            
            else{
                h--;
            }

        }

        return ans;
        
    }       
}

int main()
{
  vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector<vector<int>> ans = fourSum(nums, target);
    cout << "The quadruplets are: \n";
    for (auto it : ans) {
        cout << "[";
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}