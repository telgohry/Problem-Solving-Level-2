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

	FillArrayWithRandomNumbers(arr, arrLength);

	std::cout << "Array elements:\n";
	PrintArray(arr, arrLength);

	int search_number = ReadPositiveNumber("\n\nPlease enterh the number to search for: ");
	std::cout << "\nThe number you're lookin for is: " << search_number << "\n";

	if (CheckNumberInArray(arr, arrLength, search_number)) {
		std::cout << "Yes, the number is found :-)\n";
	}
	else {
		std::cout << "No, the number is not found :-(\n";
	}
}