#include <stdio.h>
#include <iostream>
using namespace std;

class noMilk
{
	public:
		noMilk();
		noMilk(int howMany);
		int getDonuts();
	private:
		int count;
};


noMilk::noMilk()
{
	// blank
}


noMilk::noMilk(int howMany) : count(howMany)
{
	// blank
}


int noMilk::getDonuts()
{
	return count;
}

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
			throw noMilk(donuts);
		}
		
		dpg = donuts/double(milk);
		cout << "You have " << dpg << " donuts for each glass of milk" << endl;
	}
	catch(noMilk e)
	{
		cout << "\n" << e.getDonuts() << " donuts and no milk" << endl;
	}
	
	return 0;
}

