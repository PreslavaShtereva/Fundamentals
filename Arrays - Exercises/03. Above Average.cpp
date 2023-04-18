#include<iostream>
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

int average(int arr[], int arrSize) {
	int sum = 0;

	for (size_t i = 0; i < arrSize; i++){
		sum += arr[i];

	}

	return sum;
}

int main(void) {

	int arr[arrayMAX];
	int arrSize;

	enterArray(arr, arrSize);

	int averageResult = average(arr, arrSize) / arrSize;

	for (size_t i = 0; i < arrSize; i++){
    
		if (averageResult <= arr[i]) {
			cout << arr[i] << ' ';
		}

	}
	
 return 0;
}
