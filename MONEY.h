//Money.h
//2022.06.03 newest

#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include "Time.h"

using namespace std;

class Money
{
public:
	Money();
	Money(Time);
	//��Time.cpp��countTimeMoney()��X�Ӫ��ȶǤJ

	Time getTotalMinute();
	void setTotalMinute(Time);

	void countMoney(int); //�ⰱ���O

private:
	Time totalminute;
};

#endif