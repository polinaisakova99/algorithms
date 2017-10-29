// ConsoleApplication19.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double a, b;
	cout << "Если гусь доволен, введите 1, если не доволен, введите 2." << endl;
	cin >> a;

	if (a == 1) {
		cout << "Гусь доволен!" << endl;
	}
	else if (a == 2) {
		cout << "Гусь не доволен!" << endl;
	}
	else {
		cout << "гусь не в порядке" << endl;
	}

	system("pause");
	return 0;
}