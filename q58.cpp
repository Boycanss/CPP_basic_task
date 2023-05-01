#include <iostream>
using namespace std;

#define COUNT 10
#define MAX(a, b) ((a) < (b) ? (a):(b))
void main()
{
	int* p = new int[COUNT]; // size of a pointer = 8 byte; because it's only a pointer. means memory only holds the address
	int a[COUNT]; //size of int = 4 byte; 4*10 = 40; will directly hold 10 of integers in memory
	
	for (int i = 0; i < sizeof(a); i++)
	{
		a[i] = i;
	}

	for (int i = 0; i < sizeof(a); i++)
	{
		p[i] = i;
	}

	for (int i = 0; i < MAX(sizeof(a), sizeof(p)); i++) // the MAX above is returning the min value of 2 inputs;
	{
		//will loop from 0 to 7
		printf("%d %d\n", a[i], p[i]);
		// 0 0
		// 1 1
		// 2 2
		// 3 3
		// 4 4
		// 5 5
		// 6 6
		// 7 7
	}
}

