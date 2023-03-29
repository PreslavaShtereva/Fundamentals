#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main() {

	size_t count;
	cin >> count;
  
	int max = INT_MIN;
	int min = INT_MAX;
  
	while (count) {
		int curr;
		cin >> curr;
		if (curr > max) {
			max = curr;
		}
		if (curr < min) {
			min = curr;
		}
		count--;
	}
  
	cout << min << ' ' << max;
	
return 0;
}
