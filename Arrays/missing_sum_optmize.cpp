#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{

    int sum = 0;
    int n = nums.size();
    cout<<n;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }

    int total = (n * (n + 1)) / 2;
    int result = total - sum;

    return result;
}

int main()
{

    vector<int> arr = {0 ,1, 2, 3, 5};
    int missing = missingNumber(arr);
    std::cout << "the missing number is " << missing << std::endl;

    return 0;
}