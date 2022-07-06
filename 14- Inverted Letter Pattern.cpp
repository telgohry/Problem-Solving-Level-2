#include <iostream>

int read_positive_number(std::string msg) {
	int number;

	do {
		std::cout << msg;
		std::cin >> number;
	} while (number < 1);

	return number; 
}

void print_inverted_letter_pattern(int number) {
	std::cout << "\n";
	char letter = 64 + number; 
	for (int i = letter; i > 64; i--) {
		for (int j = 1; j <= number; j++) {
			std::cout << (char)i;
		}
		number--; 
		std::cout << "\n";
	}
}

int main() {
	int number = read_positive_number("Please enter a letter number from 1 (A) to 26 (Z):\n");

	print_inverted_letter_pattern(number);
}