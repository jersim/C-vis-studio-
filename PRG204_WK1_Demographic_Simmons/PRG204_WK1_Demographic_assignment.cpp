// PRG204_WK1_Demographic_assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	char address[20];
	int phonenumber;
	char email[20];

	cout << endl << "Enter a name: ";
	cin >> name;

	cout << endl << "Enter a phone number: ";
	cin >> phonenumber;

	cout << endl << "Enter a email: ";
	cin >> email; 

	cout << endl << "Enter a address: ";
	cin >> address; 

	cout << "My name is:" << name << endl;
	cout << "My phone number is: " << phonenumber << endl; 
	cout << "My email is: " << email << endl;
	cout << "My address is: " << address << endl;

	return 0;
}