
// This is a basic non working example of how rationalization works

class Rational
{
	public:
		Rational();
		Rational(int wholeNumber);
		Rational(int numerator, int denominator);
	private:
		int top;
		int bottom;
};


// Ways to __construct 

Rational::Rational() : top(4), bottom(2)
{
	// whatever
}


Rational::Rational(int wholeNumber): top(wholeNumber), bottom(42)
{
	// whatever
}


Rational::Rational(int numerator, int denominator): top(numerator), bottom(denominator)
{
	// whatever
}


Rational::Rational(int wholeNumber): top(wholeNumber)
{
	bottom = 42;
}


Rational::Rational(int wholeNumber)
{
	top = wholeNumber;
	bottom = 2;
}




