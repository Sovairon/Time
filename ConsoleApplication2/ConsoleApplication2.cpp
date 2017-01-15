// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctime>
#include <iostream>
#include <chrono>
#include <future>
using namespace std;

int main()
{
	//struct tm * lcl_time;
	//time_t curr_time;
	struct tm newtime;
	
	//localtime_s(&newtime, &now);
	int i = 0;

	while (1)
	{
		time_t now = time(0);
		localtime_s(&newtime, &now);
		int Hrs = newtime.tm_hour;
		int Mins = newtime.tm_min;
		int Secs = newtime.tm_sec;
		cout << Hrs << Mins << Secs << endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		//i++;
	}
	return 0;
}
