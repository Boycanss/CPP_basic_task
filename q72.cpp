#include <stdio.h>
#include <iostream>
#include <chrono>

using namespace std;


struct Date {
	unsigned char dayOfWeek;
	unsigned char day;
	unsigned char month;
	unsigned int year;
};

struct Date1 {
	unsigned char dayOfWeek;
	unsigned int year;
	unsigned char day;
	unsigned char month;
};


int main(int n, char** args)
{
	cout << "Size of struct Date: " << sizeof(Date) << endl;
	// 8: because the biggest size is unsigned in which is 4 bytes. 
	// so memory will allocate 4 bytes for first block.													
	// the first block will be filled by 3 of unsigned char (dayofweek, day, month) which have 1 byte each.						
	// the remaining of the first block will be 1. it is not enough to fill an unisgned int that needs 4 bytes.
	// so memory will allocate another block which has 4 bytes. it will be filled by the unisgned int (year).

	cout << "Size of struct Date1: " << sizeof(Date1) << endl;
	// 12: because the biggest size is unsigned in which is 4 bytes.
	// so memory will allocate 4 bytes for first block.
	// the first block will be filled by 1 byte of an unsigned char (dayofweek). it will make the first block has 3 bytes remaining.
	// because the next variable is an unsigend int which needs 4 bytes, it won't fit in the first block. 
	// so memory will allocate another block (4 bytes) and is filled by unsigned int (year). 2nd block will be fulfilled;
	// memory needs to allocate antoher block (4 bytes) to store the remaining variable (unsigned char day & unsigned char month)
	// so the last block will be filled by 2 bytes of the remaining variables.


	return 0;
}
