#include <iostream>

void print_table_header() {
	std::cout << "\n\n\t\t\t\Multiplication Table From 1 to 10\t\t\t\n\n";
	
	for (int i = 1; i <= 10; i++) {
		std::cout << "\t" << i;
	}

	std::cout << "\n\n-----------------------------------------------------------------------------------\n";
}

std::string column_sperator(int i) {
	if (i < 10) {
		return "   |";
	}
	else {
		return "  |";
	}
}

void print_multiplication_table() {
	print_table_header();

	for (int i = 1; i <= 10; i++) {
		std::cout << " " << i << column_sperator(i) << "\t";
		for (int j = 1; j <= 10; j++) {
			std::cout << i * j << "\t";
		}
		std::cout << "\n";
	}
}

int main() {
	print_multiplication_table();
}