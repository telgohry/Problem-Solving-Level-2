#include <iostream>

int read_positive_number() {
	int number;

	do {
		std::cout << "Please enter a positive number:\n";
		std::cin >> number;
	} while (number < 1);

	return number; 
}

int reverse_number(int number) {
	int reverse = 0;
	int remainder = 0; 

	while (number != 0) {
		remainder = number % 10;
		reverse = reverse * 10 + remainder; 
		number /= 10;
	

	}
	return reverse; 
}


int main() {
	int number = read_positive_number();
	
	std::cout << "\nReverse is:\n" << reverse_number(number) << "\n";
	
}