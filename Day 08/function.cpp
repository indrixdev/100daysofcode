#include <iostream>

int timesTwo(int x) {
	return x * 2;
}

int main() {
	int input;
	std::cin >> input;
	std::cout << timesTwo(input);
}
