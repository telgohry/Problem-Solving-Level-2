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

bool IsPalindromeArray(int arr[100], int arrLength) {
	int i = 0, j = arrLength - 1; 

	while (i < j) {
		if (arr[i] != arr[j]) {
			return 0;
		}
		i++;
		j--; 
	}

	return 1; 
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

	if (IsPalindromeArray(arr, arrLength)) {
		std::cout << "\n\nYes, array is palindrome.\n";
	}
	else {
		std::cout << "\n\nNo, array is not palindrome.\n";
	}
}