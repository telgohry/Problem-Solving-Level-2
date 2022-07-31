#include <iostream>

void ReadArrayElements(int arr[100], int& arrLength) {

	std::cout << "Please enter the number of elements: ";
	std::cin >> arrLength;

	std::cout << "\nEnter array elements:\n";
	for (int i = 0; i < arrLength; i++) {
		std::cout << "Element [" << i + 1 << "] : ";
		std::cin >> arr[i];
	}
}

short CountEvenNumbersInArray(int arr[100], int arrLength) {
	int counter = 0;

	for (int i = 0; i < arrLength; i++) {
		if (arr[i] % 2 == 0) {
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
	int arr[100], arrLength = 0;

	ReadArrayElements(arr, arrLength);

	std::cout << "\nArray elements:\n";
	PrintArray(arr, arrLength);

	std::cout << "\nEven numbers count is: " << CountEvenNumbersInArray(arr, arrLength) << "\n";
}