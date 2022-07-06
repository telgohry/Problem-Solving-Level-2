#include <iostream>

int read_positive_number(std::string msg) {
	int number;

	do {
		std::cout << msg;
		std::cin >> number;
	} while (number < 1);

	return number; 
}

int reverse(int number) {
	int reversed_number = 0;
	int remainder;

	while (number > 0) {
		remainder = number % 10;
		reversed_number = reversed_number * 10 + remainder;
		number /= 10;
	}

	return reversed_number; 
}

bool isPalindrome(int number) {
	int reversed_number = reverse(number);
	
	if (reversed_number == number) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int number = read_positive_number("Please enter a positive number:\n");

	if (isPalindrome(number)) {
		std::cout << "\nYes, " << number << " is a palindrome number.\n";
	}
	else {
		std::cout << "\nNo, " << number << " is NOT a palindrome number.\n";
	}
}