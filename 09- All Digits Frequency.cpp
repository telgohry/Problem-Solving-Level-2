#include <iostream>

int read_positive_number(std::string msg) {
	int number;

	do {
		std::cout << msg;
		std::cin >> number;
	} while (number < 1);

	return number; 
}


int count_frequency(int number, short digit) {
	int count_frequency = 0;
	int remainder; 

	while (number != 0) {
		remainder = number % 10; 
		if (remainder == digit) {
			count_frequency++; 
		}
		number /= 10; 
	}

	return count_frequency; 

}

void print_frequency(int number) {
	std::cout << "\n";

	for (int i = 0; i < 10; i++) {
		short digit_frequency = 0; 
		digit_frequency = count_frequency(number, i); 

		if (digit_frequency > 0) {
			std::cout << "Digit " << i << " Frequency is " << digit_frequency << " Time(s).\n";
		}
	}
}


int main() {
	int number = read_positive_number("Please enter a positive number:\n");
	
	print_frequency(number);
}