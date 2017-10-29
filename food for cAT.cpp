// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;

	cout << "There are 10 cats. They eat different food. Select the cat you want to feed (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "The first cat thank you for the fish." << endl;
	}
	else if (x == 2)
	{
		cout << "The second cat thank you for the milk." << endl;
	}
	else if (x == 3)
	{
		cout << "The third cat is grateful to you for sour cream." << endl;
	}
	else if (x == 4)
	{
		cout << "The fourth cat is grateful to you for the meat." << endl;
	}
	else if (x == 5)
	{
		cout << "The fifth cat is grateful to you for the sousage." << endl;
	}
	else if (x == 6)
	{
		cout << "The sixth cat is grateful to you for the pate." << endl;
	}
	else if (x == 7)
	{
		cout << "The seventh cat is grateful to you for the dry food." << endl;
	}
	else if (x == 8)
	{
		cout << "The eighth cat is grateful to you for the grass." << endl;
	}
	else if (x == 9)
	{
		cout << "The ninth cat is grateful to you for the cream." << endl;
	}
	else if (x == 10)
	{
		cout << "The tenth cat is grateful to you for the bird." << endl;
	}
	else
	{
		cout << "Please select one of 10 cats." << endl;

	}
	system ("pause");
	return 0;
	


}

