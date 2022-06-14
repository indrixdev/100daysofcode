#include <iostream>

int main() {
  
    int amount;
    std::cout << "welcome the random number generator, how many numbers would you like to output? ";
    std::cin >> amount;

    // srand() is used to create a point in time that is different each time the program runs, 
    // without this line the for loop would produce the same values each time the program is run.
    srand(time(0));
  
    // run a loop for as many iterations as required to meet the value provided by the user. 
    for (int i = 0; i < amount; i++) {
        std::cout << rand() << ", ";
    }
}
