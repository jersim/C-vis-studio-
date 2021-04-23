// hypnosisCenter.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Client
{
	int idNum;
	int numSessions;
	int firstSessionMonth;
	int firstSessionDay;
	int firstSessionYear;
};

int main()
{
	const int LOW_NUM = 1000;
	const int HIGH_NUM = 9999;
	const int MAX_SESSIONS = 4;
	const int MONTHS_IN_YEAR = 12;

	Client aClient;

	int count;
	int nextSessionMonth;
	int nextSessionYear;

	cout << "Enter an ID number between " << LOW_NUM << " and " << HIGH_NUM;
	cout << " inclusive ";
	cin >> aClient.idNum;

	while (aClient.idNum < LOW_NUM || aClient.idNum > HIGH_NUM)
	{
		cout << "Invlid ID number!" << endl << endl;

		cout << "Enter an ID number between " << LOW_NUM << " and ";
		cout << HIGH_NUM << " inclusive ";
		cin >> aClient.idNum;

		while (aClient.idNum < LOW_NUM || aClient.idNum > HIGH_NUM)
		{
			cout << "Invlid ID number!" << endl << endl;

			cout << "Enter an ID number between " << LOW_NUM << " and ";
			cout << HIGH_NUM << " inclusive ";
			cin >> aClient.idNum;
		}
		cout << "Enter number of sessions client needs";
		cin >> aClient.numSessions;

		while (aClient.numSessions > MAX_SESSIONS)
		{
			cout << "We guarantee that no more than " << MAX_SESSIONS;
			cout << " will be necessary. " << endl;

			cout << "Please re-enter the number of sessions ";
			cin >> aClient.numSessions;
		}

		cout << "Enter the month of the first session ";
		cin >> aClient.firstSessionMonth;

		while (aClient.firstSessionMonth > MONTHS_IN_YEAR)
		{
			cout << "You must enter a valid month ";
			cin >> aClient.firstSessionMonth;
		}

		cout << "Enter the day of the frist session ";
		cin >> aClient.firstSessionMonth;

		cout << "Enter the year of the first session ";
		cin >> aClient.firstSessionYear;

		cout << endl << "Client #" << aClient.idNum << endl;
		cout << "First session is on the following day: " <<
			aClient.firstSessionMonth << "/" <<
			aClient.firstSessionDay << "/" <<
			aClient.firstSessionDay << endl << endl;;
		for (count = 2, nextSessionMonth = aClient.firstSessionMonth,
			nextSessionYear = aClient.firstSessionYear;
			count <= aClient.numSessions; count++)
		{
			nextSessionMonth += 1;

			if (nextSessionMonth > MONTHS_IN_YEAR)
			{
				nextSessionMonth -= MONTHS_IN_YEAR;
				nextSessionYear++;
			}

			cout << "Session #" << count << " is on " <<
				nextSessionMonth << "/" <<
				aClient.firstSessionDay << "/" <<
				nextSessionYear << endl;
		}

		return 0;
	}
}