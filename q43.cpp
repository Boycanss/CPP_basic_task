#include <stdio.h>
#include <iostream>

using namespace std;

int main(int n, char** args)
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = i * 10;
		cout << a[i] << " ";
	}
	cout << "" << endl;
	cout << a+1 << endl;
	cout << *(a+1) << endl; // equals to a[1];
	cout << *(&a + 1) << endl;
	/*printf("0x%x 0x%x 0x%x\n", a, *a, &a);
	printf("0x%x 0x%x 0x%x 0x%x\n", (a + 1), *(a + 1), *a + 1, &a + 1);*/
}
