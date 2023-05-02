#include<iostream>
#include<sstream>
using namespace std;


int main() {

	string input;
	getline(cin, input);

	istringstream istr(input);
	int sum = 0;
	ostringstream errors;

	string token;
  
	while (istr >> token) {
		istringstream istrConvert(token);
		int number;
		istrConvert >> number;

		if (istrConvert) {
			sum += number;
		}
		else {
			errors << token << ' ';
		}
	}
  
	cout << sum << endl;
	cout << errors.str() << endl;
  
	return 0;
}
