#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{

    unordered_map<int, int> mpp;
    mpp[0] = 1;

    int presum = 0, count = 0;

    // t.c = O(n) and for map tc is O(log n)
    // hence time complexity is O(n * log n

    for (int i = 0; i < nums.size(); i++)
    {
        presum += nums[i];

        int remove = presum - k;

        count += mpp[remove];
        mpp[presum] += 1;
    }

    return count;
}

int main()
{

    vector<int> arr = {1,2,3};
    int k = 3;
    int cnt = subarraySum(arr, k);
    cout<< cnt << "\n";
    return 0;
}