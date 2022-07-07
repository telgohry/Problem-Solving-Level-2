#include <iostream>
#include <cstdlib>

enum enCharType { 
  small_letter = 1, 
  captial_letter = 2, 
  special_character = 3, 
  digit = 4 
};

int random_number(int from, int to) {
	return rand() % (to - from + 1) + from; 
}

char get_random_character(enCharType char_type) {
	switch (char_type) {
	case enCharType::small_letter:
		return char(random_number(97, 122));
	case enCharType::captial_letter:
		return char(random_number(65, 90));
	case enCharType::special_character:
		return char(random_number(33, 47));
	case enCharType::digit:
		return char(random_number(48, 57)); 
	}
}

int main() {
	srand((unsigned)time(NULL));

	std::cout << get_random_character(enCharType::small_letter) << "\n";
	std::cout << get_random_character(enCharType::captial_letter) << "\n";
	std::cout << get_random_character(enCharType::special_character) << "\n";
	std::cout << get_random_character(enCharType::digit) << "\n";
}