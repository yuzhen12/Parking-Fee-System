//Money.cpp
//2022.06.03 newest

#include "Money.h"
#include "Time.h"

#include <iostream>

using namespace std;

Money::Money(){ } //Money���غc��

Money::Money(Time newTotalMinute)  //��Time.cpp��countTimeMoney()��X�Ӫ��ȶǤJ
{
	setTotalMinute(newTotalMinute);
}

Time Money::getTotalMinute()
{
	return totalminute;
}

void Money::setTotalMinute(Time newTotalMinute)
{
	totalminute = newTotalMinute;
}


void Money::countMoney(int totalminute)  //�p��ɶ�
{
	if (totalminute == 0) //�p��b�p�ɡA�H0���p��
	{
		cout << "Total parking fee : NT 0 dollar." << endl;
	}
	else if (totalminute > 0 && totalminute < 4)  //2�p�ɬ�4�ӥb�p��
	{
		cout << "Total parking fee : NT " << totalminute * 20 << " dollars." << endl;
	}
	else if (totalminute >= 4 && totalminute < 48) //24�p�ɬ�48�ӥb�p��
	{
		cout << "Total parking fee : NT " << totalminute * 35 << " dollars." << endl;
	}
	else if (totalminute >= 48) //�W�L24�p�ɡA�H1500���p��
	{
		cout << "Total parking fee : NT 1500 dollars." << endl;
	}
}
