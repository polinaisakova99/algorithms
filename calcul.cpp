// ConsoleApp.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	cout << "Enter x: " << endl;
	cin >> x;
	cout << "Enter y: " << endl;
	cin >> y;
	cout  << "Sum:  " << x + y << endl;
	cout  << "Odds: " << x - y << endl;
	cout  << "Composition: " <<  x*y << endl;
	cout << "Division: " << x / y <<  endl;
}

