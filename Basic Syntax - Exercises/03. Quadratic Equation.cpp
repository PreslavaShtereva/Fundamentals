#include<iostream>
#include<cmath>
using namespace std;

int main() {

	double a, b, c;
	cin >> a >> b >> c;
	double x, y;
	double descr= b * b - 4 * a * c;

	if (descr < 0) {
		cout << "no roots";
	}
	else{
		double x1 = (-b + sqrt(descr)) / (2 * a);
		cout << x1;

		if (descr > 0) {
			double x2 = (-b - sqrt(descr)) / (2 * a);
			cout <<' ' << x2;
		}
	}

return 0;
}
