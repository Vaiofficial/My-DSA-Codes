#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{

    unordered_map<int, int> ans;
    vector<int> output;

    for (int i = 0; i < nums.size(); i++)
    {
        ans[nums[i]]++;
    }

    for (auto it = ans.begin(); it != ans.end(); it++)
    {
        if (it->second > nums.size() / 3)
        {
            output.push_back(it->first);
        }
    }

    return output;
}

int main()
{

    vector<int>v = {3,2,3};

    vector<int>res = majorityElement(v);

    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    

    return 0;
}