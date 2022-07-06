#include <iostream>

int read_positive_number(std::string msg) {
	int number;

	do {
		std::cout << msg;
		std::cin >> number;
	} while (number < 1);

	return number; 
}

int frequency(int number, short digit) {
	int frequency = 0;
	int remainder; 

	while (number != 0) {
		remainder = number % 10; 
		if (remainder == digit) {
			frequency++; 
		}
		number /= 10; 
	}
	return frequency;
}


int main() {
	int number = read_positive_number("Please enter a positive number:\n");
	short digit = read_positive_number("\nPlease enter the number you want to know its frequency:\n");

	std::cout << "\nDigit " << digit << " Frequency is " << frequency(number, digit) << " Time(s).\n";
	
	
}