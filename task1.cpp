// ConsoleApplication16.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a, b, i;

	for (i = 30; i > 14; i--)
	{
		if (i <= 26) {
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}