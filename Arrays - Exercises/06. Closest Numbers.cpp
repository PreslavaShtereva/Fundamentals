#include<iostream>
#include<climits>
#include<cmath>
using namespace std;

const int arrayMAX = 100;

void enterArray(int arr[], int& arrSize) {

	cin >> arrSize;

	if (arrSize > arrayMAX) {
		cout << "Too small";
		exit(1);
	}
  
	for (int current = 0; current < arrSize; current++) {
		cin >> arr[current];
	}
}

int main(void) {

	int arr[arrayMAX];
	int arrSize;

	enterArray(arr, arrSize);

	int difference;

	if (arrSize == 1) {
		difference = 0;
	}
  
	else {
		difference = INT_MAX;
	}

	for (size_t main = 0; main < arrSize; main++){
    
		for (size_t second = main + 1; second < arrSize; second++) {
      
			int curAbs = abs(arr[main] - arr[second]);
      
			if (curAbs < difference) {
				difference = curAbs;
			}
	  }
	}
	cout << difference;


	return 0;
}
