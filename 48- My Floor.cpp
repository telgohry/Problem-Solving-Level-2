#include <iostream>

int ReadNumber(std::string msg) {
	int number;

	std::cout << msg;
	std::cin >> number;
	
	return number;
}

float MyFloor(float number) {
	if (number > 0) {
		return (int)number;
	}
	else {
		return (int)number - 1;
	}
}

int main() {
	float number = ReadNumber("Please enter a number: ");
	
	std::cout << "My floor result: " << MyFloor(number) << "\n";
}