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

void AddArrayElement(int arr[100], int& arrLength, int number) {
	arr[arrLength] = number;
	arrLength++; 
}

short FindNumberPositionInArray(int arr[100], int arrLength, int number) {
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] == number) {
			return i;
		}
	}

	return -1; 
}

bool CheckNumberInArray(int arr[100], int arrLength, int number) {
	short number_position = FindNumberPositionInArray(arr, arrLength, number);

	if (number_position == -1) {
		return 0;
	}
	else {
		return 1; 
	}
}

void CopyArrayDistinctNumbers(int arr1[100], int arrLength, int arr2[100], int& arr2Length) {
	for (int i = 0; i < arrLength; i++) {
		if (!CheckNumberInArray(arr2, arr2Length, arr1[i])) {
			AddArrayElement(arr2, arr2Length, arr1[i]);
		}
	}
}

void PrintArray(int A[100], int length) {
	for (int i = 0; i < length; i++) {
		std::cout << A[i] << " ";
	}
	std::cout << "\n";
}

int main() {
	int arr1[100], arr2[100], arr1Length = 0, arr2Length = 0;

	ReadArrayElements(arr1, arr1Length);

	std::cout << "\nArray1 elements:\n";
	PrintArray(arr1, arr1Length);

	CopyArrayDistinctNumbers(arr1, arr1Length, arr2, arr2Length);
	std::cout << "\nArray2 elements:\n";
	PrintArray(arr2, arr2Length);
}