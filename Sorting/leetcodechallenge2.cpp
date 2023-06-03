#include <bits/stdc++.h>
using namespace std;

int main()
{
    string senate = "RDD";
    int len = senate.size();

    cout << "lenght is :" << len << endl;

    if (len == 2)
    {

        for (int i = 0; i < len; i++)
        {
            if (senate[0] == 'R' && senate[1] == 'D')
            {
                cout << "he is from party 'RADIENT'" << endl;
                senate.erase(senate.begin() + 1);
                cout << "\"Radient\"" << endl;
                break;
            }

            else if (len == 2 && senate[0] == 'D' && senate[1] == 'R')
            {
                cout << "He is from party: DIRE" << endl;
                senate.erase(senate.begin() + 1);
                cout << "\"Dire\"" << endl;
                break;
            }
        }
    }

    else if (len == 3)
    {
        for (int i = 0; i < len; i++)
        {
            if (senate[0] == 'R' && senate[1] == 'D') // RDD
            {
                senate.erase(senate.begin() + 1);
                cout << "\"Dire\"" << endl;
                break;
            }
        }
    }

    return 0;
}