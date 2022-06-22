#include <iostream>

int product(int x, int y) {
	return x * y;
}

int main() {
	int num1, num2;
	std::cout << "Please enter a number: ";
	std::cin >> num1;
	std::cout << "\n Please enter another number: ";
	std::cin >> num2;
	std::cout << "\n The product of " << num1 << " and " << num2 << " is : " << product(num1, num2);
}
