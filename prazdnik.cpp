// Holidays.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;

	cout << "Enter the month" << endl;
	cin >> x;

	cout << "Enter the day" << endl;
	cin >> y;
	if (x == 1 || x == 01)
	{
		if (y == 1 || y == 01)
		{
			cout << "New Year's Day" << endl;
		}
		else if (y == 7 || y == 07)
		{
			cout << "Orthodox Christmas Day" << endl;
		}
		else if (y > 31)
		{
			cout << "check the correctness of the entered data" << endl;
		}
		else {
			cout << "Nothing" << endl;
		}
	}



	else if (x == 2 || x == 02)
	{
		if (y == 14)
		{
			cout << "Valentine's Day" << endl;
		}
		else if (y == 23)
		{
			cout << "Defender of the Fatherland Day" << endl;
		}
		else if (y > 31)
		{
			cout << "check the correctness of the entered data" << endl;
		}
		else {
			cout << "Nothing" << endl;
		}
	}


	else if (x == 3 || x == 03)
	{
		if (y == 8 )
		{
			cout << "Women's Day" << endl;
		}
		else if (y == 15)
		{
			cout << "Constitution Day" << endl;
		}
		else if (y == 20)
		{
			cout << "	March equinox" << endl;
		}
		else if (y > 31)
		{
			cout << "check the correctness of the entered data" << endl;
		}
		else {
			cout << "Nothing" << endl;
		}
	}



	else if (x == 4 || x == 04)
	{
		if (y == 2 || y == 02)
		{
			cout << "Union Day of Belarus and Russia" << endl;
		}
		else if (y == 16)
		{
			cout << "Catholic Easter Sunday" << endl;
		}
		else if (y == 25)
		{
			cout << "Radonitsa" << endl;
		}
		else if (y == 26)
		{
			cout << "Day of Remembrance of the Chernobyl Tragedy" << endl;
		}
		else if (y > 31)
		{
			cout << "check the correctness of the entered data" << endl;
		}
		else {
			cout << "Nothing" << endl;
		}
	}



	else if (x == 5 || x == 05)
	{
		if (y == 1 || y == 01)
		{
			cout << "Labour Day" << endl;
		}
		else if (y == 9)
		{
			cout << "Victory Day" << endl;
		}
		else if (y == 14)
		{
			cout << "Day of the National Emblem and Flag of Belarus" << endl;
		}
		else if (y > 31)
		{
			cout << "check the correctness of the entered data" << endl;
		}
		else {
			cout << "Nothing" << endl;
		}
	}



	else if (x == 6 || x == 06)
	{
		if (y == 21)
		{
			cout << "June Solstice" << endl;
		}
		else if (y == 22)
		{
			cout << "Remembrance Day of Victims of the Great Patriotic War" << endl;
		}
		else if (y > 31)
		{
			cout << "check the correctness of the entered data" << endl;
		}
		else {
			cout << "Nothing" << endl;
		}
	}



	else if (x == 7 || x == 07)
	{
		if (y == 3 || y == 03)
		{
			cout << "Independence Day of the Republic of Belarus" << endl;
		}
		else if (y == 6 || y == 06)
		{
			cout << "Kupalle (Day 1)" << endl;
		}
		else if (y == 7 || y == 07)
		{
			cout << "Kupalle (Day 2)" << endl;
		}
		else if (y > 31)
		{
			cout << "check the correctness of the entered data" << endl;
		}
		else {
			cout << "Nothing" << endl;
		}
	}



	else if (x == 8)
	{
		cout << "Nothing" << endl;
	}




	else if (x == 9)
	{
		if (y == 22)
		{
			cout << "September equinox" << endl;
		}
		else if (y > 31)
		{
			cout << "check the correctness of the entered data" << endl;
		}
		else {
			cout << "Nothing" << endl;
		}
	}






	else if (x == 10)
	{
		cout << "Nothing" << endl;
	}



	else if (x == 11)
	{
		if (y == 2 || y == 02)
		{
			cout << "Remembrance Day" << endl;
		}
		else if (y == 7 || y == 07)
		{
			cout << "October Revolution Day" << endl;
		}
		else if (y > 31)
		{
			cout << "check the correctness of the entered data" << endl;
		}
		else {
			cout << "Nothing" << endl;
		}
	}




	else if (x == 12)
	{
		if (y == 21)
		{
			cout << "December Solstice" << endl;
		}
		else if (y == 25)
		{
			cout << "Catholic Christmas Day" << endl;
		}
		else if (y == 31)
		{
			cout << "New Year's Eve" << endl;
		}
		else if (y > 31)
		{
			cout << "check the correctness of the entered data" << endl;
		}
		else {
			cout << "Nothing" << endl;
		}
	}

	else if (x > 12 || x < 1 ) {
		cout << "check the correctness of the entered data" << endl;
	}



	system("pause");
		return 0;

}