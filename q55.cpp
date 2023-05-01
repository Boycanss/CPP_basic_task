#include <iostream>
using namespace std;


void main()
{
	int a[4] = { 1, 5, 22, 12 };
	int* p = a;

	/*printf("0x%x 0x%x 0x%x\n", a, *a, &a);
	printf("0x%x 0x%x 0x%x\n", p, *p, &p);*/

	cout << a << endl; // address of a[0]
	cout << *(a + 3) << endl; // address of a[3]
	cout << &a << endl; // address of a

	cout << p << endl; // address of a
	cout << *(p + 3) << endl; // address of a[3]
	cout << &p << endl; // address of pointer p
							
	//printf("0x%x 0x%x 0x%x 0x%x\n", (a + 1), *(a + 1), *a + 1, &a + 1);
	// address a[1];  value a[1];  a[0] + 1 = 2;  address a + 1 (might be an address next to address a);

	/*printf("0x%x 0x%x 0x%x 0x%x\n", (p + 1), *(p + 1), *p + 1, &p + 1);*/
	// address a[1];  value a[1];  a[0] + 1 = 2;  address p + 1 (might be an address next to address p);
}
