// Zodiac.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	int b;
	cout << "Введите свой знак зодиака" << endl;
	cout << "1 - Овен" << endl;
	cout << "2 - Телец" << endl;
	cout << "3 - Близнецы" << endl;
	cout << "4 - Рак" << endl;
	cout << "5 - Лев" << endl;
	cout << "6 - Дева" << endl;
	cout << "7 - Весы" << endl;
	cout << "8 - Скорпион" << endl;
	cout << "9 - Стрелец" << endl;
	cout << "10 - Козерог" << endl;
	cin >> a;

	cout << "Введите второй знак зодиака" << endl;
	cout << "1 - Овен" << endl;
	cout << "2 - Телец" << endl;
	cout << "3 - Близнецы" << endl;
	cout << "4 - Рак" << endl;
	cout << "5 - Лев" << endl;
	cout << "6 - Дева" << endl;
	cout << "7 - Весы" << endl;
	cout << "8 - Скорпион" << endl;
	cout << "9 - Стрелец" << endl;
	cout << "10 - Козерог" << endl;
	cin >> b;



	if (a == 1 && b == 1)
	{
		cout << "45 %" ;
	}
	else if (a == 2 && b == 1)
	{
		cout << "85 %" ;
	}
	else if (a == 3 && b == 1)
	{
		cout << "51 %" ;
	}
	else if (a == 4 && b == 1)
	{
		cout << "48 %" ;
	}
	else if (a == 5 && b == 1)
	{
		cout << "49 %" ;
	}
	else if (a == 6 && b == 1)
	{
		cout << "39 %" ;
	}
	else if (a == 7 && b == 1)
	{
		cout << "58 %" ;
	}
	else if (a == 8 && b == 1)
	{
		cout << "53 %" ;
	}
	else if (a == 9 && b == 1)
	{
		cout << "61 %" ;
	}
	else if (a == 10 && b == 1)
	{
		cout << "58 %" ;
	}
	else if (a == 2 && b == 2)
	{
		cout << "72 %" ;
	}
	else if (a == 2 && b == 3)
	{
		cout << "45 %" ;
	}
	else if (a == 2 && b == 4)
	{
		cout << "78 %" ;
	}
	else if (a == 2 && b == 5)
	{
		cout << "34 %" ;
	}
	else if (a == 2 && b == 5)
	{
		cout << "45 %" ;
	}
	else if (a == 2 && b == 6)
	{
		cout << "35 %" ;
	}
	else if (a == 2 && b == 7)
	{
		cout << "81 %" ;
	}
	else if (a == 2 && b == 8)
	{
		cout << "22 %" ;
	}
	system("pause");
	return 0;
}

