#include <stdio.h>
#include <cstdlib>
#include <cctype>
#include <iostream>
using namespace std;

class Money
{
	public:
		friend Money operator +(const Money& amt1, const Money& amt2);
		friend bool operator ==(const Money& amt1, const Money& amt2);
		
		Money(long dollars, int cents);
		Money(long dollars);
		Money();
		
		double get_value() const;
		void input(istream& ins);
		void output(ostream* outs) const;
		long all_cents;
};

int main()
{
	Money cost(i,50), tax(0, 15), total;
	total = cost + tax;
	
	cout << "cost = ";
	cost.output(cout);
	cout << endl;
	cout << "tax = ";
	tax.output(cout);
	cout << endl;
	cout << "total bill = ";
	total.output(cout);
	cout << endl;
	
	if(cost == tax)
	{
		cout << "Move to another state." << endl;
	}
	else
	{
		cout << "Cool" << endl;
	}
	
	return 0;
}

Money operator +(const Money& amt1, const Money&, amt2)
{
	Money temp;
	temp.all_cents = amt1.all_cents + amt2.all_cents;

	return temp;
}

Money operator ==(const Money& amt1, const Money& amt2)
{
	return (amt1.all_cents == amt2.all_cents);
}
