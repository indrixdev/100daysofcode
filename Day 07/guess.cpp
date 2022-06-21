#include <iostream>
#include <ctime>

int main() {
	srand(time(0));
	int guesses = 5;
	int playerGuess;
	int answer = (rand() % 10) + 1;

	std::cout << "Welcome to my improved Guess the Number game!" << std::endl;
	do {
		std::cout << "\nYou have " << guesses << " to guess the number! Good Luck!";
		std::cout << "\n\nPlease enter your guess now: ";
		std::cin >> playerGuess;
		if (playerGuess == answer && guesses == 5) {
			std::cout << "\nWell done! You got it on your first try!!";
		}
		else if(playerGuess == answer) {
			std::cout << "That's Right!! and with " << guesses << " guess(es) to go!";
		}
		else if (playerGuess < answer) {
			guesses--;
			std::cout << "\nToo low. You have " << guesses << " guess(es) remaining";
		}
		else if (playerGuess > answer) {
			guesses--;
			std::cout << "\nToo high You have " << guesses << " guess(es) remaining";
		}
		else {
			std::cout << "\nInput error, number value only. Terminating program";
		}
	} while (guesses > 0);
}
