#include <stdio.h>
#include <iostream>

using namespace std;

int main(int n, char** args)
{
	int x = 20, y = 30, z = 69;
	int* p = &x;
	int* q = &y;
	int* r = &z;
	
	cout << "value x: " << x << endl; // print 20
	cout << "value y: " << y << endl; // print 30
	cout << "value z: " << z << endl; // print 69
	cout << "value p: " << p << endl; // print address of p
	cout << "value q: " << q << endl; // print address of q
	cout << "value r: " << r << endl; // print address of r
	cout << "value *p: " << *p << endl; // print value of p = 20
	cout << "value *q: " << *q << endl; // print value of q = 30
	cout << "value *r: " << *r << endl; // print value of r = 69

	cout << "Swapping Values" << endl;

	z = x; // assign value of x to z; z = 20
	x = y; // assign value of y to x; x = 30
	y = z; // assign value of z to y; while z has been assigned of value x; y = 20;

	cout << "value x: " << x << endl; // print 30
	cout << "value y: " << y << endl; // print 20
	cout << "value z: " << z << endl; // print 20
	cout << "value p: " << p << endl; // print address of p
	cout << "value q: " << q << endl; // print address of q
	cout << "value r: " << r << endl; // print address of r
	cout << "value *p: " << *p << endl; // print value of p 30
	cout << "value *q: " << *q << endl; // print value of q 20
	cout << "value *r: " << *r << endl; // print value of r 20

	return 0;
}
