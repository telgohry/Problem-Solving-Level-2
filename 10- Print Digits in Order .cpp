#include <iostream>

int read_positive_number(std::string msg) {
	int number;

	do {
		std::cout << msg;
		std::cin >> number;
	} while (number < 1);

	return number; 
}


int reverse_number(int number) {
	int remainder;
	int reverse = 0;

	while (number != 0) {
		remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number /= 10;
	}

	return reverse; 
}

void print_digits_in_order(int number) {
	std::cout << "\n";

	int remainder;
	int reversed_number = reverse_number(number);

	while (reversed_number != 0) {
		remainder = reversed_number % 10;
		std::cout << remainder << "\n";
		reversed_number /= 10;
	}
}


int main() {
	int number = read_positive_number("Please enter a positive number:\n");
	print_digits_in_order(number);
}