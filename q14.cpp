#include <stdio.h>
#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int main(int n, char** args)
{
	const double FrameRate = 5.0; // 5 frame rate
	const double FrameTime = 1.0 / FrameRate; // each frame will be 1/5 time

	while (true) { // looping forever
		clock_t start = clock(); // variable start with type clock_t
		time_t now = time(nullptr); // variable now with type time_t
		cout << time(&now) << endl; // display current time

		clock_t end = clock(); // variable end with type clock_t
		//cout << (end - start) << endl;
		double elapsed_time = (end - start) / CLOCKS_PER_SEC;  // how much time needed (in second) to execute code above from start to end;
		double sleep_time = FrameTime - elapsed_time; // 1/5 - elapsed time; 0.2

		if (sleep_time > 0) { // if sleep time > 0, 
			Sleep(DWORD(sleep_time * 1000)); // sleep program for 200 milisec
		}
	}
}

