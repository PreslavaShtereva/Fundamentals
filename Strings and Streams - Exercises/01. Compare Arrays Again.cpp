#include<iostream>
#include<sstream>
using namespace std;

bool compareArray(istream & arr1, istream & arr2) {

	while (arr1 && arr2) {

		int num1, num2;
		arr1 >> num1;
		arr2 >> num2;

		if (num1 != num2) {
			 return false;
		}
	}

		return (bool)arr1 == (bool)arr2;
	}


int main() {

	string arr1string, arr2string;

	getline(cin, arr1string);
	getline(cin, arr2string);

	istringstream arr1(arr1string), arr2(arr2string);

	if (compareArray(arr1, arr2)) {
		cout << "equal";
	}
	else {
		cout << "not equal";
	}

	return 0;
}
