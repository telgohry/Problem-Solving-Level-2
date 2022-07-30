#include <iostream>

int ReadPositiveNumber() {
	int number; 

	do {
		std::cout << "Please enter a positive number\n";
		std::cin >> number;
	} while (number <= 0);

	return number;
}

int RandomInRange(int from, int to) {
	int random_number = rand() % (to - from + 1) + from;
	return random_number;
}

std::string GenerateKey() {
	std::string key = "";
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 4; j++) {
			key += (char)RandomInRange(65, 90);
		}
		if (i < 4) {
			key += "-";
		}
	}

	return key;
}

void PrintKeys(int number) {
	std::cout << "\n";
	for (int i = 1; i <= number; i++) {
		std::cout << "Key [" << i << "] : " << GenerateKey() << "\n";
	}
}

int main() {
	srand((unsigned)time(NULL));

	int keys_number = ReadPositiveNumber();

	PrintKeys(keys_number);
	
}