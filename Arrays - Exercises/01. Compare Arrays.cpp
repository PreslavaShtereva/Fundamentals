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

bool areEqual(int arr1[], int length1, int arr2[], int lenght2) {

	if (length1 != lenght2) {
		return false;
	}
	
	for (size_t counter = 0; counter < length1; counter++) {
		if(arr1[counter]!=arr2[counter])
		return false;
	}


	return true;
}

int main(void) {

	int arr1[arrayMAX], arr2[arrayMAX];
	int arr1Size, arr2Size;

	enterArray(arr1, arr1Size);
	enterArray(arr2, arr2Size);

	if (areEqual(arr1, arr1Size, arr2, arr2Size)) {
		cout << "equal";
	}
	else {
		cout << "Not equal";
	}

	return 0;
}
