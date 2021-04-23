// ValidID.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	const int LOW_NUM = 111;
	const int HIGH_NUM = 999;

	int idNum;

	cout << "Enter an ID Number between " << LOW_NUM << " and ";
	cout << HIGH_NUM << " inclusive";
	cin >> idNum;

	while (idNum < LOW_NUM || idNum >  HIGH_NUM)
	{
		cout << "Invalid ID number!" << endl << endl;
		cout << "Enter an ID number between " << LOW_NUM << " and ";
		cout << HIGH_NUM << " inclusive ";
		cin >> idNum;
	}

	cout << "Thank you. Your valid ID is " << idNum << endl;

	return 0;
}