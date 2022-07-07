#include <iostream>
#include <string>

std::string read_text() {
	std::string s;

	std::cout << "Please enter a text:\n";
	getline(std::cin, s);

	return s; 
}

std::string encrypt(std::string plain_text, short key) {
	for (int i = 0; i <= plain_text.length(); i++) {
		plain_text[i] = char(plain_text[i] + key);
	}

	return plain_text; 
}

std::string decrypt(std::string encrypted_text, short key) {
	for (int i = 0; i <= encrypted_text.length(); i++) {
		encrypted_text[i] = char(encrypted_text[i] - key);
	}

	return encrypted_text;
}

int main() {
	short key = 2; 
	std::string text = read_text();
	std::string text_after_encryption = encrypt(text, key);
	std::string text_after_decryption = decrypt(text_after_encryption, key);

	std::cout << "Text Before Encryption: " << text << "\n";
	std::cout << "Text After Encryption: " << text_after_encryption << "\n";
	std::cout << "Text After Decryption: " << text_after_decryption << "\n";
}