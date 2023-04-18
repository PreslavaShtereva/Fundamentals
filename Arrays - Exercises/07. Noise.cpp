#include<iostream>
#include<climits>
#include<cmath>
using namespace std;


int main(void) {

	int number = 0;

	while (true) {
		char c;
		cin >> c;

		if (c == '.') {
			break;
		}
		
		if (c >= '0' && c <= '9') {
			number *= 10;
			number += c - '0';
		}
	}

	cout << sqrt(double(number));

	return 0;
}
