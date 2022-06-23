#include <string>
#include <iostream>

#pragma once
class BankAccount
{
public:
	int accountNum;
	float balance;
	std::string status;
	std::string name;

	void makeNew() {
		std::cout << "Please enter the follwing..\z";
		std::cout << "\nName: ";
		std::cin.ignore();
		std::getline(std::cin, name);
		std::cout << "\nAccount number: ";
		std::cin.ignore();
		std::cin >> accountNum;
		std::cout << "\nOpening balance: ";
		std::cin.ignore();
		std::cin >> balance;
		std::cout << "\nAccount Status: ";
		std::cin.ignore();
		std::getline(std::cin, status);
	}
};
