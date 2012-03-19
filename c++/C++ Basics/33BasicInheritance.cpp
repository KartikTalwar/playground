#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include "33BasicInheritance.h"
using namespace std;

namespace myEmployees
{
	Employee::Employee();
	{
		cout << "Enter name : " << endl;
		getline(cin, name);
		cout << "Enter SIN" << endl;
		getline(cin, sin);
	}

	Employee::Employee(string new_name, string new_number): name(new_name), sin(new_number)
	{
	}

	string Employee::getName()
	{
		return name;
	}

	string Employee::getSIN()
	{
		return sin;
	}

	void Employee::changeName(string new_name)
	{
		name = new_name;
	}

	void Employee::changeSIN(string new_sin)
	{
		sin = new_sin;
	}

	void Employee::printPay()
	{
		cout << "There is a bug in this method" << endl;
		exit(1);
	}

	void Employee::getRaise(double amount)
	{
		cout << "There is a bug in this method" << endl;
		exit(1);
	}
}
