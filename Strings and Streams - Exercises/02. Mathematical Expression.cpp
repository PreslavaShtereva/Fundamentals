#include<iostream>
#include<sstream>
using namespace std;

bool isValid(istream & exprStr) {

	int brackets = 0;
	char c;

	while (exprStr >> c) {

		switch (c) {
		case'(':
			brackets++;
			break;
		case')':
				if (brackets) 
					brackets--;
				
				else 
					return false;
					break;

	    }
	
	}

		return brackets == 0;
}

int main() {

	string expression;
	getline(cin, expression);

	istringstream exprStr(expression);

	if (isValid(exprStr)) {
		cout << "correct";
	}
	else {
		cout << "incorrect";
	}


return 0;
}
