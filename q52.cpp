#include <stdio.h>
#include <iostream>

using namespace std;

int main(int n, char** args)
{
	int x = 2, y = 8;
	int* p = &x;
	int* q = &y;

	cout <<"Address X: " << &x << endl;
	cout << "Value X: " << x << endl;
	cout << "Address Y: " << &y << endl;
	cout << "Value Y: " << y << endl;
	cout << "Value q: " << q << endl;
	cout << "Value *q: " << *q << endl;
	cout << "Address of p: " << p << endl;
	cout << "Address of q: " << q << endl;
	return 0;
}
