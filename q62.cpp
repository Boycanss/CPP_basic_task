#include <stdio.h>
#include <iostream>

using namespace std;

void clone(const char* input, char* output) 
{

	for (int k = 0; k < strlen(input); k++)
	{
		output[k] = input[k];
	}
	output[strlen(input)] = '\0'; // null char in the end
}

int main(int n, char** args)
{
	const char* input = "HELLO WORLD";

	char* output = new char[strlen(input) + 1];

	clone(input, output);
	cout << output << endl;
 
	delete[] output;
	return 0;
}
