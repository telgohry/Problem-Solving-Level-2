#include <iostream>
#include <cstdlib>

int random_number(int from, int to) {
	return rand() % (to - from + 1) + from; 
}


int main() {
	srand((unsigned)time(NULL));

	std::cout << random_number(1, 10) << "\n";
	std::cout << random_number(1, 10) << "\n";
	std::cout << random_number(1, 10) << "\n";
}