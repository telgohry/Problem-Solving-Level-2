#include <iostream>

int RandomInRange(int from, int to) {
	int random_number = rand() % (to - from + 1) + from;
	return random_number;
}

void FillArrayWithRandomNumbers(int A[100], int& length) {
	std::cout << "Please enter the number of elements: ";
	std::cin >> length;
	int random_number; 

	for (int i = 0; i < length; i++) {
		random_number = RandomInRange(1, 100);
		A[i] = random_number;
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

	int arr[100], arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);

	std::cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);
}