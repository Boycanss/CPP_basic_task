#include <stdio.h>
#include <iostream>

using namespace std;

int main(int n, char** args)
{
	int i = 140;
	//int i = 260; // if i = 260, displaying different symbol than 140,
	char b = i;
	cout << "b: " << b << endl; // displaying symbol
	unsigned char c = i;
	cout << "c: " << c << endl; // still displaying the same symbol as above
	int j = c;
	printf("%d", j);
	system("pause");
}
