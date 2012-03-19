#ifndef SALE_H
#define SALE_H

#include <iostream>
using namespace std;

namespace customSale
{
	class Sale
	{
		public:
			Sale();
			Sale(double thePrice);
			virtual double bill() const;
			double savings(const Sale& other) const;
		protected:
			double price;
	};
	
	bool operator <(const Sale& first, const Sale& second);
}

#endif
