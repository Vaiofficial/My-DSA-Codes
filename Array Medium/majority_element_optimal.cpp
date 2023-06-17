#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{

   int element;
   int count = 0;
   int target = size / 2;

   for (int i = 0; i < size; i++)
   {
      if (count == 0)
      {
         count = 1;
         element = a[i];
      }

      else if (element == a[i])
      {
         count++;
      }
      else
      {
         count--;
      }
   }

   int count_new = 0;

   for (int i = 0; i < size; i++)
   {
      if (a[i] == element)
      {
         count_new++;
      }
   }

   if (count_new > target)
   {
      return element;
   }
   return -1;
}

int main()
{

   int arr[]= {1,1,3,3,3,3,3,3,5,6};
   int n = 10;

   int ans = majorityElement(arr , n);

   cout<<"the majority element in the array is : "<<ans;

   return 0;
}

//TIME AND SPACE COMPLEXITY

//T.C = O(N)+O(N) , HERE FIRST N IS FOR CALCULATING THE COUNT AND FINDING THE EXPECTED MAJORITY ELEMENT .
//SECOND N IS FOR CHECKING THE EXPECTED MAJORITY ELEMENT IS MAJORITY OR NOT.

//S.C = O(1) AS WE ARE NOT USING AND EXTRA SPACE TO STORE ELEMENT OR TO DO ANYTHING ELSE.