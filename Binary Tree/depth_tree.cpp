#include <bits/stdc++.h>
using namespace std;

//this is only the main code for finding the max depth.


int maxDepth(Node *root)
{
    if (root == NULL)
    {
        return 0; // Return 0 for an empty subtree
    }
    else
    {
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        if (left > right)
        {
            return (left + 1);
        }
        else
        {
            return (right + 1);
        }
    }
}

int main()
{

    return 0;
}