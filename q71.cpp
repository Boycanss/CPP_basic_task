#include <stdio.h>
#include <iostream>
#include <chrono>

using namespace std;

struct Date {
	unsigned char dayOfWeek;
	unsigned char day;
	unsigned char month;
	unsigned int year;

	void Printformat1() {
		cout << (int)dayOfWeek << "," << (int)day << "-" << (int)month << "-" <<  year << endl;
	}

	void Printformat2() {
		cout << (int)day << "/" << (int)month << "/" << year << endl;
	}

	void Printformat3() {
		cout << (int)month << "-" << (int)day << "-" << year << endl;
	}

	void Printformat4() {
		cout << (int)dayOfWeek << " " << (int)day << "." << (int)month << "." << year << endl;
	}
};

int main(int n, char** args)
{
	auto datenow = chrono::system_clock::now();
	time_t t = chrono::system_clock::to_time_t(datenow);
	struct tm newTime;
	localtime_s(&newTime, &t);

	Date newDate = {
		newTime.tm_wday,
		newTime.tm_mday,
		newTime.tm_mon+1,
		newTime.tm_year+1900
	};

	newDate.Printformat1();
	newDate.Printformat2();
	newDate.Printformat3();
	newDate.Printformat4();

	
	return 0;
}
