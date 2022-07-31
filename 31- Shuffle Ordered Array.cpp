#include <iostream>

int ReadPositiveNumber(std::string msg) {
	int number; 

	do {
		std::cout << msg;
		std::cin >> number;
	} while (number <= 0);

	return number;
}

void Swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int RandomInRange(int from, int to) {
	int random_number = rand() % (to - from + 1) + from;
	return random_number;
}

void FillArrayWith1toN(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		arr[i] = i+1; 
	}
}

void ShuffleArray(int arr[100], int arrLength) {	
	for (int i = 0; i < arrLength; i++) {
		Swap(arr[RandomInRange(1, arrLength) - 1], arr[RandomInRange(1, arrLength) - 1]);
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

	int arr[100];
	int arrLength = ReadPositiveNumber("Please enter the number of elements: "); 

	FillArrayWith1toN(arr, arrLength);

	std::cout << "\nArray elements before shuffle:\n";
	PrintArray(arr, arrLength);

	ShuffleArray(arr, arrLength);

	std::cout << "\nArray elements after shuffle:\n";
	PrintArray(arr, arrLength);
}