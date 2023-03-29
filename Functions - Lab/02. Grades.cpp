#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

void input(double n) {
	
	if (n >= 2.00 && n <= 2.99) {
		cout << "Fail";
	}
	else if (n >= 3.00 && n <= 3.49) {
		cout << "Poor";
	}
	else if (n >= 3.50 && n <= 4.49) {
		cout << "Good";
	}
	else if (n >= 4.50 && n <= 5.49) {
		cout << "Very good";
	}
	else if (n >= 5.50 && n <= 6.00) {
		cout << "Excellent";
	}

}

int main() {
  
	double n;
	cin >> n;
	input(n);

return 0;
}
