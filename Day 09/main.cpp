/*
    Fully aware that the newly created newAccount instance is only accessible within the if loop,
    This has been done on purpose to demonstrate the use of Scope to define access to content
*/



#include <iostream>
#include "BankAccount.h"

std::string input;

int main()
{

    std::cout << "Would you like to open an account? ";
    std::cin >> input;
    if (input == "yes" || input == "Yes") {
        BankAccount newAccount;
        newAccount.makeNew();
        std::cout << newAccount.accountNum << std::endl;
        std::cout << newAccount.name << std::endl;
        std::cout << newAccount.balance << std::endl;
        std::cout << newAccount.status << std::endl;
    }
    else {
        std::cout << "Incorrect input" << std::endl;
    }
    
}
