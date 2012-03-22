#include <stdio.h>
#include <iostream>
#include "35VirtualClassFunctions.h"
using namespace std;

namespace customSale
{
	Sale::Sale() : price(10)
	{
		// blank
	}
	
	Sale::Sale(double thePrice) : price(thePrice)
	{
		// blank
	}
	
	double Sale::bill() const
	{
		return price;
	}
	
	double Sale::savings(const Sale& other) const
	{
		return (bill() - other.bill());
	}
	
	bool operator < (const Sale& first, const Sale& second)
	{
		return (first.bill() < second.bill());
	}
	

}

	int main()
	{
		// Implementation in next example
		return 0;
	}
