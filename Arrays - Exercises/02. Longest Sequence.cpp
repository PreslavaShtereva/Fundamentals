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

int main(void) {

	int arr[arrayMAX];
	int arrSize;

	enterArray(arr, arrSize);

	size_t seq_lenght = 1;
	int longestElement = arr[0];

	size_t cur_lenght = 1;
	int curLongest = arr[0];

	for (size_t c = 1; c < arrSize; c++) {

		if (arr[c] == curLongest) {
			cur_lenght++;
		}
		else {
			cur_lenght = 1;
			curLongest = arr[c];
		}
		if (cur_lenght >= seq_lenght) {
			seq_lenght = cur_lenght;
			longestElement = curLongest;
		}
	}
	for (size_t c = 0; c < seq_lenght; c++) {
		cout << longestElement << ' ';
	}
	
	return 0;
}
