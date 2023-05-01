#include <stdio.h>
#include <iostream>

int main(int n, char** args)
{	
	printf("Number of Param %d\n", n); // number of param 1 (n value replaces %d)
	for (int i = 0; i < n; i++) // loop through the args char 
	{
		printf("param[%d] = %s\n", i, args[i]); // param[0] = directory of the .exe file; 
	}
	system("pause"); // pause the program and wait for user input to continue
}

