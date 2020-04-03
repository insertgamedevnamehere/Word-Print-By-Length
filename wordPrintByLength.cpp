#include <iostream>
#include <string>

int main() {
	std::string word; // declare a string to store user input
	int word_length = 0; // initalize an integer for length of string
	std::cout << "Please enter a word: "; // get user input
	std::cin >> word; // store user input to the string

	for ( int i = 0; i < word.length(); i++ ) { 
		std::cout << word << std::endl;
	}

	return 0;
}
