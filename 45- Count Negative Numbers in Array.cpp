#include <iostream>

int RandomInRange(int from, int to) {
	int random_number = rand() % (to - from + 1) + from;
	return random_number;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
	std::cout << "Please enter the number of elements: ";
	std::cin >> arrLength;
	int random_number; 

	for (int i = 0; i < arrLength; i++) {
		random_number = RandomInRange(-100, 100);
		arr[i] = random_number;
	}
}

short CountNegativeNumbersInArray(int arr[100], int arrLength) {
	short counter = 0;

	for (int i = 0; i < arrLength; i++) {
		if (arr[i] < 0) {
			counter++;
		}
	}

	return counter;
}

void PrintArray(int A[100], int length) {
	for (int i = 0; i < length; i++) {
		std::cout << A[i] << " ";
	}
	std::cout << "\n";
}

int main() {
	srand((unsigned)time(NULL));

	int arr[100], arrLength = 0;

	FillArrayWithRandomNumbers(arr, arrLength);

	std::cout << "\nArray elements:\n";
	PrintArray(arr, arrLength);

	std::cout << "\nNegative numbers count is: " << CountNegativeNumbersInArray(arr, arrLength) << "\n";
}