#include <iostream>

void AddInArray(int arr[100], int& arrLength) {
	arrLength = 0;
	bool add; 

	do {
		std::cout << "Please enter a number: ";
		std::cin >> arr[arrLength];
		arrLength++; 

		std::cout << "Do you want to add more numbers? [0]:NO, [1]:YES? ";
		std::cin >> add; 
		std::cout << "\n";
	} while (add != 0);
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

	AddInArray(arr, arrLength);

	std::cout << "\nArray Length: " << arrLength << "\n";
	
	std::cout << "Array elements: ";
	PrintArray(arr, arrLength);
}