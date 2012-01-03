#include <stdio.h>
#include <iostream>
#include "35VirtualClassFunctions.h"
#include "36VirtualFunctionUsage.h"
using namespace std;
using namespace customSale;


namespace customSale
{
	DiscountSale::DiscountSale() : Sale(), discount(0)
	{
		// __construct
	}
	
	DiscountSale::DiscountSale(double thePrice, double theDiscount) : Sale(thePrice), discount(theDiscount)
	{
		// __construct
	}
	
	double DiscountSale::bill() const
	{
		double fraction = discount/100;
		return (1 - fraction)*price;
	}
}

int main()
{
	Sale simple(10.00);
	DiscountSale discount(11.00, 10);
	
	
	if(discount < simple)
	{
		cout << "Discounted item is cheaper" << endl;
		cout << "Savings is $" << simple.savings(discount) << endl;
	}
	else
	{
		cout << "You got ripped off" << endl;
	}
	
	return 0;
}
