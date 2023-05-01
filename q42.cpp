/* A C program to demonstrate working of memcpy */
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
	int a[10] = {11,22,33,44,55,66,77,88,99,100};
	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	int c[20];
	
	//cara pakai memcpy
	memcpy(c, a, sizeof(a));
	memcpy(&c[10], b, sizeof(b));

	//cara tanpa memcpy
	for (int i = 0; i < 20; i++)
	{
		if (i < 10) {
			c[i] = a[i];
		}
		else {
			c[i] = b[i - 10];
		}
	}

	for (int i = 0; i < 20; i++) {
		cout << c[i] << " ";
	}
	cout << "" << endl;

	return 0;
}
