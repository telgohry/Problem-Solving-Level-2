#include <iostream>

int read_positive_number() {
	int number;

	do {
		std::cout << "Please enter a positive number:\n";
		std::cin >> number;
	} while (number < 1);

	return number; 
}

int sum_of_digits(int number) {
	int sum = 0; 

	while (number != 0) {
		sum += (number % 10);
		number /= 10; 
	}

	return sum; 
}


int main() {
	int number = read_positive_number();

	std::cout << "\nSum of Digits = " << sum_of_digits(number) << "\n";
}