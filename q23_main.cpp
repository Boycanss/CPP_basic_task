#include <stdio.h>
#include <iostream>

using namespace std;

int main(int n, char** args)
{
	extern int myVar;
	cout << myVar << endl;
}
