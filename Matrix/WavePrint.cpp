#include <bits/stdc++.h>
using namespace std;

void WavePrint(vector<vector<int>>matrix)
{
    // vector<int>ans;
    int row = matrix.size();
    int col = matrix[0].size();

    for(int i=0;i<col;i++)
    {
        //check whether the column is even or odd
        if((i & 1)==0)
        {
            //traverse top to bottom
            for (int j = 0; j < row; j++)
            {
                cout<<matrix[j][i]<<" ";
            }   
        }
        else{
            //the column is odd 
            for(int j = row-1;j>=0;j--)
            {
                cout<<matrix[j][i]<<" ";
            }
        }
    }
}

int main()
{
   vector<vector<int>>arr {

    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
   };

   WavePrint(arr);

   return 0;
}