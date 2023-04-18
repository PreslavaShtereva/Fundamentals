#include<iostream>
using namespace std;

extern void output0to19(int digit);


void outputThousands(int thousands) {
	output0to19(thousands);
	cout << " thousand";
 }

void outputHundreds(int hundreds) {
	output0to19(hundreds);
	cout << " hundred";
}

void output0to19(int digit) {

	switch (digit) {
	case 0: cout << "zero"; break;
	case 1: cout << "one"; break;
	case 2: cout << "two"; break;
	case 3: cout << "three"; break;
	case 4: cout << "four"; break;
	case 5: cout << "five"; break;
	case 6: cout << "six"; break;
	case 7: cout << "seven"; break;
	case 8: cout << "eight"; break;
	case 9: cout << "nine"; break;
	case 10: cout << "ten"; break;
	case 11: cout << "eleven"; break;
	case 12: cout << "twelve"; break;
	case 13: cout << "thirteen"; break;
	case 14: cout << "fourteen"; break;
	case 15: cout << "fifteen"; break;
	case 16: cout << "sixteen"; break;
	case 17: cout << "seventeen"; break;
	case 18: cout << "eighteen"; break;
	case 19: cout << "nineteen"; break;
	}
}

void outputDoubleDigit(int zeroTo99) {

	int decimals = zeroTo99 / 10;
	int singles = zeroTo99 % 10;

	switch (decimals) {
	case 2:cout << "twenty"; break;
	case 3:cout << "thirty"; break;
	case 4:cout << "fourty"; break;
	case 5:cout << "fifty"; break;
	case 6:cout << "sixty"; break;
	case 7:cout << "seventy"; break;
	case 8:cout << "eighty"; break;
	case 9:cout << "ninety"; break;
	}

	if (singles) {
		cout << ' ';
		output0to19(singles);
	}
}

void outputZeroTo99(int zeroTo99) {
	if (zeroTo99 <= 19) 
		output0to19(zeroTo99);

	else 
		outputDoubleDigit(zeroTo99);
	
}

int main(void) {

	int num;
    cin >> num;

	if (num == 0) {
		cout << "zero" << endl;
		return 0;
	}

	int thousands = num / 1000;
	int hundreds = (num % 1000) / 100;
	int zeroTo99 = (num % 100);

	if (thousands)
		outputThousands(thousands);

	if (hundreds){
		if (num > 999) 
			cout << ' ';
		outputHundreds(hundreds);
		}

	if (zeroTo99) {
		if (num > 99)
			cout << ' ';
		outputZeroTo99(zeroTo99);
	}

	cout << endl;

	return 0;
}
