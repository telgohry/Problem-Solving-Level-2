#include <iostream>

int read_positive_number() {
	int number;

	do {
		std::cout << "Please enter a positive number:\n";
		std::cin >> number;
	} while (number < 1);

	return number; 
}

bool isPerfect(int number) {
	int sum = 0;
	int m = number / 2;

	for (int i = 1; i <= m; i++) {
		if (number % i == 0) {
			sum += i;
		}
	}

	if (sum == number) {
		return 1;
	}
	else {
		return 0;
	}
}

void print_result(int number) {
	std::cout << "\n";
	if (number >= 1 && number <= 5) {
		std::cout << number << " is NOT a perfect number\n";
	}
	else {
		for (int i = 1; i <= number; i++) {
			if (isPerfect(i)) {
				std::cout << i << "\n";
			}
	}
	}
}

int main() {
	int number = read_positive_number();
	print_result(number);
}
