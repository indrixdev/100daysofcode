#include <iostream>

int main() {
    int playerInt;
    std::cout << "Please enter any number and I will determine if the number is a multiple of 3 or 5:";
    std::cin >> playerInt;
    if(playerInt % 3 == 0 || playerInt % 5 == 0) {
        std::cout << "This number is divisible by 3 or 5" << std::endl;
    } else {
        std::cout << "This number is not divisible by 3 or 5" << std::endl;
    }
}
