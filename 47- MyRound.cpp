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

float MyRound(float number) {
	int int_part = (int)number;

	if (GetFractionPart(number) >= 0.5) {
		if (number > 0) {
			return int_part + 1; 
		}
		else {
			return int_part - 1;
		}
	}
	else {
		return int_part; 
	}
}

int main() {
  float number = ReadNumber("Please enter a number: ");
	
	std::cout << "My round result: " << MyRound(number) << "\n";
	std::cout << "C++ round result: " << round(number) << "\n";
}