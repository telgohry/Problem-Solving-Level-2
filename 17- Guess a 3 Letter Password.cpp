#include <iostream>

std::string read_string(std::string msg) {
	std::string s;

	std::cout << msg;
	std::cin >> s; 

	return s; 
}


void guess_three_uppercase_letter_password(std::string password) {
	std::cout << "\n";
	std::string word = "";
	int trail = 0; 

	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				trail++; 

				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				std::cout << "Trail [" << trail << "]: " << word << "\n";

				if (word == password) {
					std::cout << "\nPassword is " << word << "\n";
					std::cout << "Found after " << trail << " Trial(s)\n";
					exit(0);
				}
				
				word = ""; 
			}
		}
	}
}

int main() {
	std::string password = read_string("Please enter a 3 letter uppercase password:\n");
	guess_three_uppercase_letter_password(password);
}