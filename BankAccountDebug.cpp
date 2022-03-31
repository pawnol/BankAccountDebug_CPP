/*
Bank Account Debug
Pawelski
3/31/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>

int main()
{
    double account_amount, withdrawl_amount;
    std::cout << "How much money is in your account? >> ";
    std::cin >> account_amount;
    std::cout << "How much money would you like to withdraw? >> ";
    std::cin >> withdrawl_amount;
    if (account_amount > withdrawl_amount)
    {
        std::cout << "You have insufficient funds!\n";
    }
    else (account_amount < withdrawl_amount)
    {
        account_amount -= withdrawl_amount;
        std::cout << "Withdrawal successful! You have $" << account_amount 
            << " left.\n";
    }
    return 0;
}
