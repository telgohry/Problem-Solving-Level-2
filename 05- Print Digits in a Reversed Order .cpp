#include <iostream>

int read_positive_number() {
	int number;

	do {
		std::cout << "Please enter a positive number:\n";
		std::cin >> number;
	} while (number < 1);

	return number; 
}

void print_number_reversed(int number) {
	std::cout << "\n";
	while (number != 0) {
		std::cout << number % 10 << "\n";
		number /= 10; 
	}
}

int main() {
	int number = read_positive_number();
	print_number_reversed(number);
}