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

	for (size_t curMemb = 0; curMemb < arrSize; curMemb++){
    
		for (size_t cur = 0; cur < arrSize; cur++) {
      
			cout << arr[curMemb] * arr[cur] << ' ';
      
		}
	}


	return 0;
}
