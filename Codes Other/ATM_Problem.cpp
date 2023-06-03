#include <bits/stdc++.h>
using namespace std;

int main()
{
    float initial_balance, bank_charges = 0.50, remaing_balance, check;
    int withdraw_amount;

    cout << "Enter the Amount you wanted to withdraw" << endl;
    cin >> withdraw_amount;
    cout << "Enter Acccount Balance" << endl;
    cin >> initial_balance;

    check = withdraw_amount % 10;

    if (withdraw_amount <= initial_balance && (check == 0 || check == 1))
    {
        remaing_balance = initial_balance - (withdraw_amount + bank_charges);
        cout << remaing_balance;
    }

    else if (withdraw_amount > initial_balance)
    {
        cout << "Transaction Failed! Not Enough Balance :"<<initial_balance;
    }

    return 0;
}