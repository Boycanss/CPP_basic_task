#include <iostream>
using namespace std;


void main()
{
	//example using delete;
	int a[4] = { 1, 2, 3, 4 };
	int* p = a;

	int* p2 = new int;
	p2 = &*(a + 2); // contoh; p2 = address of a[2] atau address of 3;

	cout << p2 << endl;  // address of a[2]
	cout << *p2 << endl; // 3
	//delete p; // error
	//delete a; // error
	delete p2; // tidak error; membebaskan memory pada heap; hanya bisa dilakukan pada deklarasi menggunakan 'new'

	//cout << p2 << endl; // error; karena sudah dihapus dari memory
	//cout << *p2 << endl; // error; karena sudah dihapus dari memory

	//example using delete[]
	int* a = new int[4];
	delete[] a;
}

// 5.7
//Why should we use delete ?
//	to free the memory that has been allocated in heap; to prevent memory leak;
//
//When we use delete ?
//	we use delete when we declare variable with 'new' keyword; meaning we allocate dynamic memory in heap and it needs to be deleted after we used the variable / object;
//
//Difference between delete and delete[].Write a demo
//delete is used when we declare a variable with 'new' keyword;
//ex: like the code above;
//
//delete[] is used when we declare a variable with 'new[]' keyword;
//ex: like code above line 24;
	