#include <stdio.h>
#include <iostream>

using namespace std;

int main(int n, char** args)
{
	const char st1[] = "Hello World"; // should use const char st[]
	//print from st
	cout << st1 << endl;

	char st[] = { 'H', 'e','l','l','o',' ','W','o','r','l','d' }; // assign every array
	// print from st[]
	for (int i = 0; i < sizeof(st); i++)
	{
		cout << st[i];
	}

	cout << "" << endl;

	char* st2 = new char[sizeof(st) + 1]; // +1 means to allocate space for null char

	for (int k = 0; k < sizeof(st); k++)
	{
		st2[k] = st[k]; // assign from st[] to st2[]
	}
	st2[sizeof(st)] = '\0'; // null char in the end

	cout << st2 << endl; // displaying: Hello World

	return 0;
}
