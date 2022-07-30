#include <iostream>

int ReadPositiveNumber(std::string msg) {
	int number; 

	do {
		std::cout << msg;
		std::cin >> number;
	} while (number <= 0);

	return number;
}

void ReadArrayElements(int A[20], int &length) {

  std::cout << "Please enter the number of elements: ";
  std::cin >> length; 
  
	std::cout << "\nEnter array elements:\n";
	for (int i = 0; i < length; i++) {
		std::cout << "Element [" << i + 1 << "] : ";
		std::cin >> A[i];
	}
}

int CheckNumberRepeated(int A[20], int length, int number) {
	int count = 0; 
	for (int i = 0; i < length; i++) {
		if (A[i] == number) {
			count++; 
		}
	}

	return count;
}

void PrintArray(int A[20], int length) {
	for (int i = 0; i < length; i++) {
		std::cout << A[i] << " ";
	}
	std::cout << "\n";
}


int main() {
 	int A[20], length;
	ReadArrayElements(A, length);
	
	int number = ReadPositiveNumber("\nPlease enter the number you want to check: ");

	std::cout << "\nOriginal array: ";
	PrintArray(A, length);
	std::cout << "\n" << number << " is repeated " << CheckNumberRepeated(A, length, number) << " time(s)\n";
}