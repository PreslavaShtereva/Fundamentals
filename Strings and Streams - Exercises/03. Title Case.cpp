#include<iostream>
#include<sstream>
using namespace std;

string capitalize(const string& input) {

	ostringstream oStr;

	bool capitalize = true;
	for (size_t idx = 0; idx < input.length(); idx++)
	{
		char c = input[idx];
		bool isSmallerLetter = (c >= 'a' && c <= 'z');
		bool isBiggerLetter = (c >= 'A' && c <= 'Z');

		if (isSmallerLetter || isBiggerLetter) {
			if (capitalize) {
				if (isSmallerLetter)
					c -= 32; //ASCII table
				capitalize = false;
			}
		}
			else
				capitalize = true;
			oStr << c;
		}

	return oStr.str();
	}


int main() {

	string input;
	getline(cin, input);
	cout << capitalize(input);

	return 0;
}
