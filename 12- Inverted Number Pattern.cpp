#include <iostream>

int read_positive_number(std::string msg) {
	int number;

	do {
		std::cout << msg;
		std::cin >> number;
	} while (number < 1);

	return number; 
}

void print_inverted_pattern(int number) {
	std::cout << "\n";

	for (int i = number; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			std::cout << i;
		}
		std::cout << "\n";
	}
}

int main() {
	int number = read_positive_number("Please enter a positive number:\n");

	print_inverted_pattern(number); 
}