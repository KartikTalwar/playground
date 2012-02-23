#ifndef DISCOUTSALE_H
#define DISCOUNTSALE_H

#include "35VirtualClassFunctions.h"

namespace customSale
{
	class DiscountSale: public Sale
	{
		public:
			DiscountSale();
			DiscountSale(double thePrice, double theDiscout);
			double bill() const;
		private:
			double discount;
	};
}

#endif
