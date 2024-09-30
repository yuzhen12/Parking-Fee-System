//main.cpp
//2022.06.03 newest

#include <iostream>
#include <string>

#include "Money.h"
#include "Time.h"

using namespace std;

int main() {

	//input time, number

	string number;
	int h1, h2, m1, m2;

	cout << "Please enter your car number: (EX: ABC-1234)" << endl;
	cin >> number;
	cout << endl;

	cout << "(只提供當天計費，不提供跨夜計費服務)" << endl;
	cout << "Please enter your starting time: (Hours:00~24 / Minutes:00~59)" << endl;
	cin >> h1 >> m1;
	cout << endl;

	cout << "(只提供當天計費，不提供跨夜計費服務)" << endl;
	cout << "Please enter your leaving time: (Hours:00~24 / Minutes:00~59)" << endl;
	cin >> h2 >> m2;
	cout << endl;

	//class Time

	Time t(h1, m1, h2, m2);  //宣告類別為Time的資料

	//output number, total fee and time

	cout << "------------------------------------------" << endl;
	cout << endl;
	cout << "Your car number : " << number << endl;

	t.countTime(h1, h2 ,m1, m2); //計算總共停多久 
	t.countTimeMoney(h1, h2, m1, m2); //便利算錢的時間
	
	//class Money

	Money m; //宣告類別為Money的資料，並給定m變數
	m.countMoney(t.countTimeMoney(h1, h2, m1, m2));

	return 0;
}