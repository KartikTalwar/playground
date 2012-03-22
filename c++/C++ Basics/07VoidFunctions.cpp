#include <stdio.h>

void initializeScreen();

double celsius(double f);

void showResults(double f, double c);

int main()
{
	using namespace std;
	double f, c,

	initializeScreen();
	cout << "Convert f to c"
	     << "enter a temp in f";
	cin >> f;

	c = celsius(f);

	showResults(f, c);

	return 0;
}


void initializeScreen()
{
	using namespace std;
	cout << endl;
	return;
}

double celsius(double f)
{
	return ((5.0/9.0)*(f-32));
}


void showResults(double f, double c)
{
	using namespace std;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.percision(2);
	cout << f
	     << " degrees f is = to \n"
	     << c << " degrees c";

	return;
}
