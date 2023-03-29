#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

void input(double n) {
	
	if (n > 0) {
		cout << "The number " << n << " is positive.";
	}
	else if (n < 0) {
		cout << "The number " << n << " is negative.";
	}
	else if (n == 0) {
		cout << "The number " << n << " is zero.";
	}
}

int main() {
  
	int n;
	cin >> n;
	input(n);

return 0;
}
