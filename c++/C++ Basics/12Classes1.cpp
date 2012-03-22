#include <iostream.h>
#include <stdio.h>
using namespace std;

class DayOfYear
{
	public:
		void output();
		int month;
		int day;
};

int main()
{
	DayOfYear today, birthday;

	cout << "enter this month's number" << endl;
	cin >> today.month;
	cout << "enter today's date" << endl;
	cin >> today.day;
	cout << "enter your birth month" << endl;
	cin >> birthday.month;
	cout << "enter your birth day" << endl;
	cin >> birthday.day;

	cout << "todays date is "
	     << today.output();
	cout << "your birthday is "
	     << birthday.output();

	return 0;
}

void DayOfYear::output()
{
	cout << "month = " << month << " day = " << day << endl;
}
