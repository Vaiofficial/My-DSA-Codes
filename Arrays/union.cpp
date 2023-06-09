#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> s;

    // inserting all the elements of the array1 into the set s
    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }

    // inserting all the elements of the array2 into the set s
    // only unique elements will stored as we are using set
    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }

    // converting the set into the vector
    vector<int> arr(s.begin(), s.end());

    for (int i = 0; i < arr.size(); i++)
    {
        // Printing the element at
        // index 'i' of vector
        cout << arr[i] << " ";
    }

}

    int main()
    {

        int arr1[] = {1, 2, 9, 4, 10};
        int arr2[] = {1, 2, 3};
        int n = 5, m = 3;

        findUnion(arr1, arr2, n, m);

        return 0;
    }