#include <stdio.h>
#include <iostream>
int main(int n, char** args)
{
	int i = 5;
	while (i = 5) // error. should be using ==
	{
		// if in while (i == 5) the console will be opened
		printf("Inside loop\n"); // will print this "Inside loop"
		i--; // decrement
	}
	// console will be closed;
}
