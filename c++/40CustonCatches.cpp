#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


class NegativeNumber
{
	public:
		NegativeNumber();
		NegativeNumber(string givenMessage);
		string getMessage();
	private:
		string message;
};


class DivideByZero
{
};


NegativeNumber::NegativeNumber() {}

NegativeNumber::NegativeNumber(string givenMessage) : message(givenMessage) {}

string NegativeNumber::getMessage()
{
	return message;
}


int main()
{
	int jemHadar, klingons;
	double portion;
	
	try
	{
		cout << "Enter the number of Jen Hadar Warriors: " << endl;
		cin >> jemHadar;
		if(jemHadar < 0)
		{
			throw NegativeNumber("Jem Hadar");
		}
		
		cout << "How many Klingon Warriors do you have? " << endl;
		cin >> klingons;
		if(klingons < 0)
		{
			throw NegativeNumber("Klingons");
		}
		
		if(klingons != 0)
		{
			portion = jemHadar/double(klingons);
		}
		else
		{
			throw DivideByZero();
		}
		
		cout << "Each Klingon must fight " << portion << " Jem Hadar" << endl;
	}
	catch(NegativeNumber e)
	{
		cout << "Negative number bro " << e.getMessage() << endl;
	}	
	catch(DivideByZero)
	{
		cout << "RIP bro" << endl;
	}
		
	
	return 0;
}






