#include<iostream>
using namespace std;

int main(void) {

	size_t counts[10] = { 0 };
	int inputSize;

	cin >> inputSize;

	for (size_t i = 0; i < inputSize; i++)
	{
		int curNumber;
		cin >> curNumber;
		counts[curNumber]++;
	}

	size_t maxValue = counts[0];

	for (size_t i = 0; i < 10; i++)
	{
		if (counts[i] > maxValue) 
    {
			maxValue = counts[i];
		}
	}

	for (size_t i = 0; i < 10; i++)
	{
		if (counts[i] == maxValue) 
    {
			cout << i << ' ';
		}
	}

return 0;
}
