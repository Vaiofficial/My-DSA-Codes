#include <bits/stdc++.h>
using namespace std;

int Sum(int Num1, int Num2)
{
    int Sum;

    Sum = Num1 + Num2;

    return Sum;
}

int main()
{
    int num1, num2;

    cout << "Enter Two Numbers" << endl;
    cin >> num1 >> num2;
    cout << "The sum of two Numbers is " << Sum(num1,num2) << "." << endl;
    return 0;
}