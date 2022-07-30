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

void SumOfTwoArrays(int arr1[100], int arr2[100], int arr3[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		arr3[i] = arr1[i] + arr2[i];
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

	int arr1[100], arr2[100], arr3[100];
	int arrLength = ReadPositiveNumber("Please enter the number of elements: "); 
	FillArrayWithRandomNumbers(arr1, arrLength);
	FillArrayWithRandomNumbers(arr2, arrLength);

	SumOfTwoArrays(arr1, arr2, arr3, arrLength);

	std::cout << "\nArray1 Elements: ";
	PrintArray(arr1, arrLength);

	std::cout << "\nArray2 Elements: ";
	PrintArray(arr2, arrLength);

	std::cout << "\nSum of array1 and array2 elements:\n";
	PrintArray(arr3, arrLength);
}