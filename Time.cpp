//Time.cpp
//2022.06.03 newest

#include "Time.h"
#include <iostream>

using namespace std;

Time::Time() // Time的建構式 
{
	hour1 = 0;
	minute1 = 0;
	hour2 = 0;
	minute2 = 0;
}

Time::Time(int newHour1, int newMinute1, int newHour2, int newMinute2 )
{
	hour1 = newHour1;
	minute1 = newMinute1;
	hour2 = newHour2;
	minute2 = newMinute2;
}

// time1

int Time::getHour1()
{
	return hour1;
}

int Time::getMintue1()
{
	return minute1;
}

void Time::setHour1(int newHour1)
{
	hour1 = newHour1;
}

void Time::setMintue1(int newMinute1)
{
	minute1 = newMinute1;
}

// time2

int Time::getHour2()
{
	return hour2;
}

int Time::getMintue2()
{
	return minute2;
}

void Time::setHour2(int newHour2)
{
	hour2 = newHour2;
}

void Time::setMintue2(int newMinute2)
{
	minute2 = newMinute2;
}

// count time

void Time::countTime(int hour1, int hour2, int minute1, int minute2) //計算總共停多久
{
	cout << "Total parking time: " << (hour2 * 60 + minute2 - hour1 * 60 - minute1) / 60 << " Hours "
		<< (hour2 * 60 + minute2 - hour1 * 60 - minute1) % 60 << " Minutes. " << endl;
}


int Time::countTimeMoney(int hour1, int hour2, int minute1, int minute2) //便利算錢的時間
{
	int total = 0;
	total = (hour2 * 60 + minute2 - hour1 * 60 - minute1) / 30;
	return total;
}
