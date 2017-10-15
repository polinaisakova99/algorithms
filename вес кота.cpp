// pril1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int x;
	int y;
	cout << "Enter the weight of your first cat: ";
	cin >> x;
	cout << "Enter the weight of your second cat: " << endl;
	cin >> y;
	if (x > 5) {
		cout << "YOUR FIRST CAT IS FAT" << endl;
	}
	else {
		cout << "Your first cat has normal weight!" << endl;
	}
	if (y > 5) {
		cout << "YOUR SECOND CAT IS FAT" << endl;
	}
	else {
		cout << "Your second cat has normal weight!" << endl;
	}
	return 0;
}

