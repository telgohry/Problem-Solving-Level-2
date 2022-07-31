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

void AddArrayElement(int arr[100], int& arrLength, int number) {
	arr[arrLength] = number;
	arrLength++; 
}

void CopyArrayUsingAddArrayElement(int arr1[100], int arr2[100], int &arr1Length, int &arr2Length) {
	for (int i = 0; i < arr1Length; i++) {
		AddArrayElement(arr2, arr2Length, arr1[i]);
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
  
  	int arr1[100], arr2[100], arr1Length = 0, arr2Length = 0;

	arr1Length = ReadPositiveNumber("Please enter the number of elements: ");

	FillArrayWithRandomNumbers(arr1, arr1Length);

	std::cout << "\nArray1 elements:\n";
	PrintArray(arr1, arr1Length);

	CopyArrayUsingAddArrayElement(arr1, arr2, arr1Length, arr2Length); 
	std::cout << "\nArray2 elements after copy:\n";
	PrintArray(arr2, arr2Length);
}