#include <stdio.h>
#include <iostream>
using namespace std;

typedef int* IntPtrType; // declare a typedef that is a pointer to int

int main()
{
	IntPtrType ptr_a, ptr_b, * ptr_c; // 3 pointer variables that points to int

	ptr_a = new int; // allocate dynamic memory in ptr_a
	*ptr_a = 3; // dereference ptr_a to input a value of 3
	ptr_b = ptr_a; // ptr_b equals to ptr_a

	cout << *ptr_a << " " << *ptr_b << "\n"; // 3 3

	ptr_b = new int; // allocate dynamic memory in ptr_b
	*ptr_b = 9; // dereference ptr_b to input a value of 9

	cout << *ptr_a << " " << *ptr_b << "\n"; // 3 9

	*ptr_b = *ptr_a; // dereference ptr_b to input a value of dereference value of ptr_a 3

	cout << *ptr_a << " " << *ptr_b << "\n"; // 3 3

	delete ptr_a; // release memory from ptr_a
	ptr_a = ptr_b; // ptr_a becomes ptr_b

	cout << *ptr_a << " " << *&*&*&*&*ptr_b << "\n"; // 3 3
	/* ptr_b is a pointer to int. *ptr_b will get the value of the pointer. *& will get the value from inside the address of the *ptr_b (3). and so on */

	ptr_c = &ptr_a; // ptr_c address will be equal to address of ptr_a;
	
	cout << *ptr_c << " " << **ptr_c << "\n"; // (pointer to address of ptr_a) 3(dereference of pointer ptr_c )

	delete ptr_a; // free memory ptr_a
	ptr_a = NULL; // make ptr_a variable equals to null;

	return 0;
}
