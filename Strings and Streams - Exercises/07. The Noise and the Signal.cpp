#include<iostream>
#include<sstream>
#include<climits>
#include<cctype>
using namespace std;

int main() {

	string input;
	getline(cin, input);

	istringstream istr(input);

	string maxNoise;
	string token;
	while (istr >> token) {

		string curNoise;
		istringstream istrToken(token);

		char c;
		while (istrToken >> c) {
			if (!isdigit(c))
				curNoise += c;
		}

		if (curNoise.length() > maxNoise.length())
			maxNoise = curNoise;

		else if (curNoise.length() == maxNoise.length() && curNoise < maxNoise)
			maxNoise = curNoise;
	}

	if (maxNoise.length())
		cout << maxNoise;
	else
		cout << "no noise";
	
return 0;
}
