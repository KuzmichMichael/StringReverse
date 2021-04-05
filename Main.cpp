#include <iostream>
#include <string>

std::string reverseString(std::string inputString);

int main() {

	std::string inputString{};

	std::cout << "Enter string: ";
	std::getline(std::cin, inputString);
	inputString = reverseString(inputString);

	std::cout << "New string: " << inputString << std::endl;
}

std::string reverseString(std::string inputString)
{
	std::string outputString{};
	outputString.resize(inputString.length());

	size_t inputStringIterator = inputString.length() - 1;
	size_t outputStringIterator = 0;
	for (outputStringIterator; outputStringIterator < outputString.length(); outputStringIterator++) {
		outputString[outputStringIterator] = inputString[inputStringIterator];
		inputStringIterator--;
	}

	return outputString;
}
