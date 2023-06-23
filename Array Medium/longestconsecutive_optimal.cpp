#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int nums[], int n)
{

    //   int n = nums.size();
    int longest = 1;
    unordered_set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int x = it;

            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                count = count + 1;
            }
            longest = max(longest, count);
        }
    }

    return longest;
}

int main()
{

    int nums[] = {2,6,1,9,4,5,3};
    int n= 7;

    int ans = findLongestConseqSubseq(nums , n);

    cout<<"the ans is : "<<ans;
    return 0;
}

//TIME AND SPACE COMPLEXITY

//T.C - 0(2N) - ONE FOR PUSHING ELEMNETS INTO THE SET AND ANOTHER FOR TRAVERSING THE SET.
//S.C - 0(N) AS WE ARE USING SET FOR STORING THE ELEMENTS.