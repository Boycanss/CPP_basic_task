#include <stdio.h>
#include <iostream>

using namespace std;

void calculate(int val)
{
	static int count = 10;
	static int value;
	//cout << value << endl;
	printf("%d %d\n", value, count++);
	value = val;
}

int main(int n, char** args)
{
	static int vava;
	cout << vava << endl;
	int i = 2, j = 3; //declare variables i and j; with value of 0 for both
	calculate(i); // call function calculate with param i
	calculate(j); // call function calculate with param j
	calculate(j);
}
