//Time.h
//2022.06.03 newest

#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;

class Time
{
public:
	Time(); // Time���غc��
	Time(int, int, int, int);
	
	int getHour1();
	int getMintue1();
	void setHour1(int);
	void setMintue1(int);

	int getHour2();
	int getMintue2();
	void setHour2(int);
	void setMintue2(int);

	void countTime(int, int, int, int); //�p���`�@���h�[

	int countTimeMoney(int, int, int, int); //�K�Q������ɶ�

private:
	int hour1, hour2;
	int minute1, minute2;
};

#endif