/** Below is the basic layout of a C++ program. This will be the foundation on which many of the programs I will write are going to be based on.
    There will be a small section on declaring variables, data types, conditionals and loops, and input and output statements.
**/


#include <iostream>

int main() {
  std::cout << "Hello World" << std::endl;
  return 0;
}

// Introducing variables and data types

int main() {
  std::string name = "Perry";    // string is a datatype used to output a string of characters 
  int age = 29;             // int is for integers, a whole number
  char firstIntial = 'p';   // char is for single letter output
  double floatNum = 12.34;  // double is used for floating point numbers, numbers with decimal places
  bool myBoolean = true;    // bool is used for boolean values, these are either true or false
}


// If Else conditional, used when you want to execute certain code when certain requirements are met
int main() {
  if (conditional statement) {
    // Execute this block of code
  } else if (other conditional statement) {
    // Execute this block instead
  } else {
    // If the other two blocks are not run, then run this one instead then end the conditional statement
  }
}

// getting user input and displaying back to the user
int main() {
  std::string name;                                          // initialize name variable and leave blank
  std::cout << "Please enter your name: ";              // output to console asking user to input their name
  std::cin >> name;                                     // listens to next line input by the user and assigns that value to the variable
  std::cout << "Your name is " << name << std::endl;    // outputs the name the user input 
}
// While loop, used for things such as games where the program runs as long as player lives for example, then should that condition no longer be true the loop ends.
int main() {
  while (condition) {
    // run this loop until the condition has been satisfied. Be careful as if the loop cannot be satisfied then the program will run forever
  }
}
