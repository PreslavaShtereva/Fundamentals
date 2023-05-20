#include<iostream>
#include<sstream>
#include<climits>
using namespace std;

int main() {

	string input;
	getline(cin, input);

	istringstream istr(input);

	int max = INT_MIN;
	string token;

	while (istr >> token) {
		istringstream istrToken(token);
		int number = 0;
		char c;

		while (istrToken >> c) {
			if (isdigit(c)) {
				number *= 10;
				number += (c - '0');
			}
		}
		if (number > max) {
			max = number;
		}
	}
		cout << max;

	return 0;
}
