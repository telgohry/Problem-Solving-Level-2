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
		random_number = RandomInRange(1, 100);
		arr[i] = random_number;
	}
}

int MaxNumberInArray(int arr[100], int arrLength) {
	int max = 0;

	for (int i = 0; i < arrLength; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

void PrintArray(int A[100], int length) {
	for (int i = 0; i < length; i++) {
		std::cout << A[i] << " ";
	}
	std::cout << "\n";
}

int main() {
  	srand((unsigned)time(NULL));

	int arr[100], arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);

	std::cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);

	std::cout << "\nMax Number is: " << MaxNumberInArray(arr, arrLength) << "\n";
}