#include <iostream>

int favNumber;

// Gets the user's input
int inputNumber() {
	std::cin >> favNumber;

	return favNumber;
}

// Checks whether the number provided is between 1 and 100
void checkNumber(int favNumber) {

	if (favNumber >= 1 && favNumber <= 100) {
		std::cout << "\nCool, " << favNumber << " is my favourite number too! :)\n";
	}
	else {
		std::cout << "\nThis is not a number between 1 and 100, please choose again...\n\n"; // TODO: fix exception caused if favNumber inputted isn't an integer
		inputNumber();
		checkNumber(favNumber);
	}
}

int main() {

	std::cout << "What is your favourite number between 1 and 100?\n\n";
	inputNumber();
	checkNumber(favNumber);
	
	return 0;
}
