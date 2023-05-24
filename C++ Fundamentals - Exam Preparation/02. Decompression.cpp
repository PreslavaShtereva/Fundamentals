#include<iostream>
#include<sstream>
#include<string>

using namespace std;

string decompress(const string & input) {

	ostringstream output;

	int number = 0;

	for (char c : input) {

		if (c >= '0' && c <= '9') {
			number = number * 10;
			number += (c - '0');
			continue;
		}

		if (number) {
			string strTemp(number, c);
			output << strTemp;
			number = 0;
		}
		else {
			output << c;
		}
	}
	return output.str();
}

int main() {

	string input;

	getline(cin, input);

	cout << decompress(input) << endl;

	return 0;
}
