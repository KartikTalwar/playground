#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int donuts, milk;
	double dpg;
	
	try
	{
		cout << "Enter number of donuts: " << endl;
		cin >>  donuts;
		cout << "Enter glasses of milk : " << endl;
		cin >> milk;
		
		if(milk < 1)
		{
			throw donuts;
		}
		
		dpg = donuts/double(milk);
		cout << "You have " << dpg << " donuts for each glass of milk" << endl;
	}
	catch(int e)
	{
		cout << e << " donuts and no milk" << endl;
	}
	
	return 0;
}
