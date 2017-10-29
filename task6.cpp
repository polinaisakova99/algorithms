// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n;

	cout << "input n: ";     cin >> n;
	if (n <= 0)
		cout << "error n" << endl;
	else
	{
		int count = 0;
		while (n>0)
		{
			if ((n % 10) % 2 == 0)
				count++;
			n /= 10;
		}
		cout << "answer: " << count << endl;
	}
	system("pause");
    return 0;
}

