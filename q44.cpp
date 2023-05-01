#include <stdio.h>
#include <iostream>

using namespace std;

void Sorting(int arr[], int start, int finish) {
	for (int i = start; i < finish; i++)
	{
		for (int j = start; j < finish - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		};
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
}

int main(int n, char** args)
{
	int arr[5] = { 100,4,2,6,3 };
	Sorting(arr, 0, 3);
	return 0;
}
