#include <stdio.h>
#include <iostream>
#include <chrono>

using namespace std;

struct Date {
	unsigned char dayOfWeek;
	unsigned char day;
	unsigned char month;
	unsigned int year;

	Date(unsigned char dayOfWeek, unsigned char day, unsigned char month, unsigned int year)
		: dayOfWeek(dayOfWeek), day(day), month(month+1), year(year+1900) {}

	bool CheckValidDate() {
		if (dayOfWeek < 1 || dayOfWeek > 7) {
			return false;
		}

		if (month < 1 || month > 12) {
			return false;
		}

		int maxDaysofMonth;
		if (month == 2) {
			maxDaysofMonth = 28;
		}
		else {
			maxDaysofMonth = 31;
		}

		if (day < 1 || day > maxDaysofMonth) {
			return false;
		}

		return true;
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
		newTime.tm_mon,
		newTime.tm_year
	};

	cout << newDate.CheckValidDate() << endl;

	return 0;
}