#include <bits/stdc++.h>
using namespace std;

int main()
{

    int nums1[3] = [1,2,3];
    int nums1[3] = [2,4,6];
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2)
    {
    list<int>answer;

        for(int i = 0;i<n;i++)
        {
            for(int j=0; j<n; j++)
            {
                if(nums[i]==nums[j])
                break;  
            }
            answer.emplace_back(a[i]);
        }

        for(auto it : answer)
        {
            cout<<it<<" ";
        }
   return 0;
     }
}