//Money.cpp
//2022.06.03 newest

#include "Money.h"
#include "Time.h"

#include <iostream>

using namespace std;

Money::Money(){ } //Money的建構式

Money::Money(Time newTotalMinute)  //把Time.cpp裡countTimeMoney()算出來的值傳入
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


void Money::countMoney(int totalminute)  //計算時間
{
	if (totalminute == 0) //小於半小時，以0元計算
	{
		cout << "Total parking fee : NT 0 dollar." << endl;
	}
	else if (totalminute > 0 && totalminute < 4)  //2小時為4個半小時
	{
		cout << "Total parking fee : NT " << totalminute * 20 << " dollars." << endl;
	}
	else if (totalminute >= 4 && totalminute < 48) //24小時為48個半小時
	{
		cout << "Total parking fee : NT " << totalminute * 35 << " dollars." << endl;
	}
	else if (totalminute >= 48) //超過24小時，以1500元計算
	{
		cout << "Total parking fee : NT 1500 dollars." << endl;
	}
}
