#include <iostream>

int ReadNumber(std::string msg) {
	int number;

	std::cout << msg;
	std::cin >> number;
	
	return number;
}

float MyAbs(float number) {
	if (number < 0) {
		return number * -1;
	}
	else {
		return number;
	}
}

int main() {
  
  float number = ReadNumber("Please enter a number: ");
	
	std::cout << "My abs result: " << MyAbs(number) << "\n";
	std::cout << "C++ abs result: " << abs(number) << "\n";
}