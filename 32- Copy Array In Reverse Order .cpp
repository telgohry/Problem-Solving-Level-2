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

void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
	//std::cout << "Please enter the number of elements: ";
	//std::cin >> arrLength;
	int random_number; 

	for (int i = 0; i < arrLength; i++) {
		random_number = RandomInRange(1, 100);
		arr[i] = random_number;
	}
}

void CopyArrayInReversedOrder(int arr1[100], int arr2[100], int arrLength) {
	for (int i = 0, j = arrLength-1; i < arrLength; i++, j--) {
		arr2[j] = arr1[i];
	}
}

void PrintArray(int A[100], int length) {
	for (int i = 0; i < length; i++) {
		std::cout << A[i] << " ";
	}
	std::cout << "\n";
}

int main() {
	srand((unsigned)time(NULL));

	int arr[100], arr2[100];
	int arrLength = ReadPositiveNumber("Please enter the number of elements: "); 

	FillArrayWithRandomNumbers(arr, arrLength);

	std::cout << "\nArray1 elements:\n";
	PrintArray(arr, arrLength);

	CopyArrayInReversedOrder(arr, arr2, arrLength);

	std::cout << "\nArray2 elements after copying array1 in reversed order:\n";
	PrintArray(arr2, arrLength);
}