#include <iostream>

void print_all_words_from_AAA_to_ZZZ() {
	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				std::cout << char(i) << char(j) << char(k) << "\n";
			}
		}
	}
}

int main() {
  
	print_all_words_from_AAA_to_ZZZ();
}