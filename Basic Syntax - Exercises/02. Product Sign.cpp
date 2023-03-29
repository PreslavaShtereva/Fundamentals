#include<iostream>
#include<cmath>
using namespace std;

int main() {

	double a, b, c;
	cin >> a >> b >> c;

	if (a == 0 || b == 0 || c == 0) {
		cout << "+";
		return 0;
	}

	bool one = a > 0;
	bool two = b > 0;
  
	one = (one == two);
	two = c > 0;
	one = (one == two);

	if (one) {
		cout << '+';
	}
	else {
		cout << '-';
	}
  
return 0;
}
