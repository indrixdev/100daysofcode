// login and registration system
#include <iostream>
#include <string>

// Rolling variable used to navigate menus
int userChoice;

// admin username and password
std::string userNameAttemptAdm;
std::string passwordAttemptAdm;
std::string userNameAdm;
std::string passwordAdm;

// student username and password
std::string userNameAttemptStu;
std::string passwordAttemptStu;
std::string userNameStu;
std::string passwordStu;

bool loggedIn;

std::string news = "No News, Check again later.";
std::string events = "No events right now";

void adminLogin() {
    std::cout << "\nPlease enter your username:";
    std::cin >> userNameAttemptAdm;

    std::cout << "Please enter your password:";
    std::cin >> passwordAttemptAdm;

    if (userNameAttemptAdm == userNameAdm && passwordAttemptAdm == passwordAdm) {
        std::cout << "\nLogin Successful" << std::endl;
        loggedIn = true;
    } else {
        std::cout << "\nLogin Failed, please double check credentials" << std::endl;
    }
}

void studentLogin() {
    std::cout << "\nPlease enter your username:";
    std::cin >> userNameAttemptStu;

    std::cout << "Please enter your password:";
    std::cin >> passwordAttemptStu;

    if (userNameAttemptStu == userNameStu && passwordAttemptStu == passwordStu) {
        std::cout << "\nLogin Successful" << std::endl;
        loggedIn = true;
    } else {
        std::cout << "\nLogin Failed, please double check credentials" << std::endl;
    }
}

void logout() {
    std::cout << "\nLogged out successfully";
    loggedIn = false;
}

void registerStudentUser() {
    std::cout << "\nPlease enter a username:";
    std::cin >> userNameStu;
    std::cout << "Please enter a password:";
    std::cin >> passwordStu;
    std::cout << "\nThank you for registering. You may now login\n";
}

void registerAdminUser() {
    std::cout << "\nPlease enter a username:";
    std::cin >> userNameAdm;
    std::cout << "Please enter a password:";
    std::cin >> passwordAdm;
    std::cout << "\nThank you for registering. You may now login\n";
}

void updateNews() {
    std::cout << "What news would you like to update? " << std::endl;
    std::cin.ignore();
    getline(std::cin, news);
}

void updateEvents() {
    std::cout << "What event would you like to add? " << std::endl;
    std::cin.ignore();
    getline(std::cin, events);
}   

int main() {
    do {
        std::cout << "\n!------------------------------------------------------------------------------------!\n";
        std::cout << "Welcome to the student system. Please choose from the following options: " << std::endl;
        std::cout << "Type '1' Student access or '2' for Admin access: ";
        std::cin >> userChoice;

        if (userChoice == 1) {
            std::cout << "Type '1' if you would like to login or '2' if you would like to register or '3' if you would like to exit: ";
            std::cin >> userChoice;
            if (userChoice == 1) {
                studentLogin();
                if(loggedIn) {
                    do {
                        std::cout << "\nType '1' for news, '2' for events or '3' to logout:";
                        std::cin >> userChoice;
                        if (userChoice == 1) {
                            std::cout << news;
                        } else if (userChoice == 2) {
                            std::cout << events;
                        } else if (userChoice == 3) {
                            logout();
                        } else {
                            std::cout << "Input error, Please try again";
                        }
                    } while (loggedIn);
                }
            } else if (userChoice == 2) {
                registerStudentUser();
            } else if (userChoice == 3) {
                std::cout << "Exiting Program";
                return 0;
            } else {
                std::cout << "\nInput error, please try again" << std::endl;
            }
        } else if (userChoice == 2) {
            std::cout << "Type '1' if you would like to login or '2' if you would like to register or '3' if you would like to exit: ";
            std::cin >> userChoice;
            if (userChoice == 1) {
                adminLogin();
                if(loggedIn) {
                    do {
                        std::cout << "\nType '1' to update news, '2' to update events or '3' to logout:";
                        std::cin >> userChoice;
                        if (userChoice == 1) {
                            updateNews();
                        } else if (userChoice == 2) {
                            updateEvents();
                        } else if (userChoice == 3) {
                            logout();
                        } else {
                            std::cout << "Input error, Please try again";
                        }
                    } while (loggedIn);
                }
            } else if (userChoice == 2) {
                registerAdminUser();
            } else if (userChoice == 3) {
                std::cout << "Exiting Program";
                return 0;
            } else {
                std::cout << "\nInput error, please try again" << std::endl;
            }
        } else {
            std::cout << "Input error, please try again";
        }
    } while (true);
}
