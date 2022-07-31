#include <iostream>

int ReadPositiveNumber(std::string msg) {
	int number; 

	do {
		std::cout << msg;
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

void FillArrayWithKeys(std::string arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		arr[i] = GenerateKey();
	}
}

void PrintKeysFromArray(std::string arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		std::cout << "Array[" << i << "] : " << arr[i] << "\n";
	}
}

int main() {
	srand((unsigned)time(NULL));

	std::string arr[100];
	int arrLength = ReadPositiveNumber("Please enter the number of elements: "); 

	FillArrayWithKeys(arr, arrLength);

	std::cout << "Array elements:\n\n";
	PrintKeysFromArray(arr, arrLength);
}