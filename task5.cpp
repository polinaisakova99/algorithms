// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int x;
	cout << "Enter: ";
	cin >> x;
	for (int i = 1; i <= x; i++) {
		sum = sum + i;
	}

	cout << "answer " << sum << endl;
	system("pause");
	return 0;
}