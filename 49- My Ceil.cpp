#include <iostream>
#include <cmath>

int ReadNumber(std::string msg) {
	int number;

	std::cout << msg;
	std::cin >> number;
	
	return number;
}

float GetFractionPart(float number) {
	return number - (int)number; 
}

int MyCeil(float number) {
	if (abs(GetFractionPart(number)) > 0) {
		if (number > 0) {
			return (int)number + 1;
		}
		else {
			return (int)number;
		}
	}
	else {
		return number;
	}
}

int main() {
	float number = ReadNumber("Please enter a number: ");
	
	std::cout << "My ceil result: " << MyCeil(number) << "\n";
}