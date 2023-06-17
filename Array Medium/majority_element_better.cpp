#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{

    int i, j;
    map<int, int> m;
    int target = size / 2;

    // PUSHING THE ELEMENT INTO THE MAP WITH ITS COUNT(HOW MANY TIME ITS APPEARED)

    for (int i = 0; i < size; i++)
    {
        m[a[i]]++;
    }

    // CHECKING IF THE COUNT OF THE ELEMENT IS GREATER THAN THE TARGET VALUE THAT IS SIZE/2.

    for (auto it : m)
    {
        if (it.second > target)
            return it.first;
    }

    return -1;
}

int main()
{

    int arr[] ={1,2,2,2,2,2,1,4,2,1};
    int n = 10;

    int ans = majorityElement(arr , n);

     cout<<"the element occured greater than size/2 is : "<<ans;

    return 0;
}

//TIME AND SPACE COMPLEXITY

//T.C = O(N * LOGN) + O(N) - AS WE ARE USING MAP DATA STRUCTURE , THE INSERTION TAKE 0(LOGN) HENCE.
//HERE THE FIRST N REPRESNTS THE SIZE OF THE ARRAY , THE SECOND LOGN REPRESENTS THE TIME FOR INSERTION IN THE SET,AND LAST O(N) REPRESENT TIME TO CHECK THE ELEMENT WHICH IS GREATER THAN THE TARGET VALUE i.e SIZE/2.

//IF WE TAKE UNORDERED MAP .
//O(N) FOR THE BEST CASE , AND O(N*2) FOR THE WORST CASE .

//S.C =  O(N) AS WE ARE USING SET DATA-STRUCTURE.