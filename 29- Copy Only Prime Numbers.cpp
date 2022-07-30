#include <iostream>

int RandomInRange(int from, int to) {
	int random_number = rand() % (to - from + 1) + from;
	return random_number;
}

bool IsPrime(int number) {
	if (number <= 1) {
		return 0;
	}
	else {
		int m = number / 2;
		for (int i = 2; i <= m; i++) {
			if (number % i == 0) {
				return 0;
			}
		}
	}
	return 1; 
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

void CopyOnlyPrimeNumbers(int arr1[100], int arrLength, int arr2[100], int &arr2Length) {
	arr2Length = 0;
	for (int i = 0, j = 0; i < arrLength; i++) {
		if (IsPrime(arr1[i])) {
			arr2[j] = arr1[i];
			arr2Length++;
			j++;
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
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrLength, arr2Length;
	FillArrayWithRandomNumbers(arr, arrLength);

	CopyOnlyPrimeNumbers(arr, arrLength, arr2, arr2Length);

	std::cout << "\nArray1 Elements: ";
	PrintArray(arr, arrLength);

	std::cout << "\nPrime Numbers in Array2: ";
	PrintArray(arr2, arr2Length);
}