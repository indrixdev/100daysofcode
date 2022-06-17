#include <iostream>
#include <ctime>      // For randomizing numbers
#include <cstdlib>
#include <algorithm>  // For working through arrays to confirm if player score equals a snake or ladder tile
#include <iterator>   // For working through arrays to confirm if player score equals a snake or ladder tile

std::string player1;
std::string player2;
std::string p1Choice;
std::string p2Choice;
int p1Counter;
int p2Counter;
int diceRoll;
int snakes[] = {15, 28, 36, 40, 67, 82};
int ladders[] = {5, 21, 33, 54, 66, 90};
bool playing = true;

//
void rollOne();
void rollTwo();
void winner();
void p1Turn();
void p2Turn();

int main() {
    srand(time(0));
    std::cout << "Player 1 please enter your name: ";
    std::cin >> player1;
    std::cout << "Player 2 please enter your name: ";
    std::cin.ignore();
    std::cin >> player2;
    if (playing){
        do {
            p1Turn();
            winner();
            p2Turn();
            winner();
        } while(playing);
    }
}
void rollOne() {
    for(int i = 0; i<1; i++) {
        std::cout << player1 << " Rolled the dice" << std::endl;
        diceRoll = (int) (rand() % 10) + 2;
        p1Counter = p1Counter + diceRoll;
        std::cout << player1 << " has a score of " << p1Counter << std::endl;
        if(std::find(std::begin(snakes), std::end(snakes), p1Counter) != std::end(snakes)) {
            std::cout << "You landed on a snake! You lose 5 points\n";
            p1Counter = p1Counter - 5;
            std::cout << player1 << " has a new score of " << p1Counter << "\n";
        } else if(std::find(std::begin(ladders), std::end(ladders), p1Counter) != std::end(ladders)) {
            std::cout << "You found a ladder! Gain 5 points\n";
            p1Counter = p1Counter + 5;
            std::cout << player1 << " has a new score of " << p1Counter << "\n";
        }
    }
}
void rollTwo() {
    for(int i = 0; i<1; i++) {
        std::cout << player2 << " Rolled the dice" << std::endl;
        diceRoll = (int) (rand() % 10) + 2;
        p2Counter = p2Counter + diceRoll;
        std::cout << player2 << " has a score of " << p2Counter << std::endl;
    } if(std::find(std::begin(snakes), std::end(snakes), p2Counter) != std::end(snakes)) {
        std::cout << "You landed on a snake! Lose 5 points\n";
        p2Counter = p2Counter - 5;
        std::cout << player2<< " has a new score of " << p2Counter << "\n";
    } else if(std::find(std::begin(ladders), std::end(ladders), p2Counter) != std::end(ladders)) {
        std::cout << "You found a ladder! Gain 5 points\n";
        p2Counter = p2Counter + 5;
        std::cout << player2 << " has a new score of " << p2Counter << "\n";
    }
}
void winner() {
    if (p1Counter >= 100) {
        std::cout << player1 << " is the winner!";
        playing = false;
    } else if (p2Counter >= 100) {
        std::cout << player2 << " is the winner!";
        playing = false;
    }
}
void p1Turn() {
    if (playing) {
        std::cout << "\n" << player1 << " type 'roll' to roll the dice or 'exit' to forfeit the game: ";
        std::cin.ignore();
        std::cin >> p1Choice;
        if (p1Choice == "Roll" || p1Choice == "roll") {
            rollOne();
        } else if (p1Choice == "Exit" || p1Choice == "exit") {
            std::cout << player1 << " has forfeited the match! " << player2 << " is the winner!\n";
            playing = false;
        } else {
            std::cout << "Input error -- Turn skipped!\n";
        }
    }
}
void p2Turn() {
    if (playing) {
        std::cout << "\n" << player2 << " type 'roll' to roll the dice or 'exit' to forfeit the game: ";
        std::cin.ignore();
        std::cin >> p2Choice;
        if (p2Choice == "Roll" || p2Choice == "roll") {
            rollTwo();
        } else if (p2Choice == "Exit" || p2Choice == "exit") {
            std::cout << player2 << " has forfeited the match! " << player1 << " is the winner!\n";
            playing = false;
        } else {
            std::cout << "Input error -- Turn skipped!\n";
        }
    }
}
