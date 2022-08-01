#include <iostream>
#include <cmath>

int ReadNumber(std::string msg) {
	int number;

	std::cout << msg;
	std::cin >> number;
	
	return number;
}

int MySqrt(float number) {
	return pow(number, 0.5);
}

int main() {
	float number = ReadNumber("Please enter a number: ");
	
	std::cout << "My square root result: " << MySqrt(number) << "\n";
}