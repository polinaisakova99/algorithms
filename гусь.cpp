// ConsoleApplication19.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double a, b;
	cout << "���� ���� �������, ������� 1, ���� �� �������, ������� 2." << endl;
	cin >> a;

	if (a == 1) {
		cout << "���� �������!" << endl;
	}
	else if (a == 2) {
		cout << "���� �� �������!" << endl;
	}
	else {
		cout << "���� �� � �������" << endl;
	}

	system("pause");
	return 0;
}