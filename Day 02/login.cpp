// login and registration system

#include <iostream>
#include <string>


// Required Variables
int userChoice;
std::string userNameAttempt;
std::string passwordAttempt;
std::string userName;
std::string password;
std::string news = "There is no news to report right now. Please check again later\n";
std::string events = "There are no new events right now. Please check again later\n";
bool loggedIn;

// Required Functions
void login() {
    std::cout << "\nPlease enter your username:";
    std::cin >> userNameAttempt;

    std::cout << "Please enter your password:";
    std::cin >> passwordAttempt;

    if (userNameAttempt == userName && passwordAttempt == password) {
        std::cout << "\nLogin Successful" << std::endl;
        loggedIn = true;
    } else {
        std::cout << "\nLogin Failed, please double check credentials\n" << std::endl;
    }
}

void logout() {
    std::cout << "\nLogged out successfully";
    loggedIn = false;
}

void registerUser() {
    std::cout << "\nPlease enter a username:";
    std::cin >> userName;
    std::cout << "Please enter a password:";
    std::cin >> password;
    std::cout << "\nThank you for registering. You may now login\n";
}


int main() {
    do {
        std::cout << "\n!------------------------------------------------------------------------------------!\n";
        std::cout << "Welcome to the student system. Please choose from the following options: " << std::endl;
        std::cout << "Type '1' if you would like to login or '2' if you would like to register or '3' if you would like to exit: ";
        std::cin >> userChoice;

        if (userChoice == 1) {
            login();
            do {
                std::cout << "\nType 1 for news, '2' for events or '3' to logout:";
                std::cin >> userChoice;
                if(userChoice == 1) {
                    std::cout << news;
                } else if (userChoice == 2) {
                    std::cout << events;
                } else if (userChoice == 3) {
                    logout();
                } else {
                    std::cout << "Input error, Please try again";
                }
            } while(loggedIn);
        } else if (userChoice == 2) {
            registerUser();
        } else if (userChoice == 3) {
            std::cout << "Exiting Program";
            return 0;
        } else {
            std::cout << "\nInput error, please try again" << std::endl;
        }
    }
    while(true);
}
