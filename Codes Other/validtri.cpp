#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3, i = 0, testcases;

    cin >> testcases;

    while (i < testcases)
    {
        cin >> num1 >> num2 >> num3;

        if ((num1 + num2 + num3) == 180)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout<<endl;
    }
    return 0;
}
