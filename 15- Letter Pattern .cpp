#include <iostream>

int read_positive_number(std::string msg) {
	int number;

	do {
		std::cout << msg;
		std::cin >> number;
	} while (number < 1);

	return number; 
}

void print_letter_pattern(int number) {
	std::cout << "\n";
	for (int i = 65; i <= 65 + number - 1; i++) {
		for (int j = 1; j <= i - 65 +1; j++) {
			std::cout << char(i);
		}
		std::cout << "\n";
	}
}

int main() {
	int number = read_positive_number("Please enter a letter number from 1 (A) to 26 (Z):\n");

	print_letter_pattern(number);
}