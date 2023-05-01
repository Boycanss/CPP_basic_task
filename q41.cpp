#include <stdio.h>
#include <iostream>

using namespace std;

int main(int n, char** args)
{
	const int input = 10;
	int arr[input];
	int result = 0;

	for (int i = 0; i < input; i++) // loop through 10
	{
		cin >> arr[i]; // get user input from console
		result += arr[i]; // sum up every user input and save in result variable
	}

	for (size_t j = 0; j < input; j++) // loop through 10
	{
		if (arr[j] >= 10) { // if the value is greater or equal than 10
			cout << "Greater or equal to 10: " << arr[j] << endl; // print
		}
	}
	cout << result << endl; // print the sum up result
	return 0;
}
