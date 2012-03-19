#include <stdio.h>
#include <iostream.h>

using namespace std;

class DayOfYear
{
	public:
		DayOfYear(int p1, int p2);
		void input();
		void output();
		void set(int nmonth, int nday);
		int getMonth();
		int getDay();
	private:
		int month;
		int day;
};


int main()
{
	DayOfYear sampleConstructor(6, 29), today, birthday;

	cout << "enter todays date: " << endl;
	today.input();
	cout  << "what you typed was" << endl;
	today.output();

	birthday.set(3, 21);

	cout << "This guys birthday is : " << endl;
	birthday.output();

	if( today.getMonth() == birthday.getMonth() && today.getDay() == birthday.getDay() )
	{
		cout << "Happy Birthday!" << endl;
	}
	else
	{
		cout << "Wattup" << endl;
	}

	return 0;

}


DayOfYear::DayOfYear(int p1, int p2)
{
	month = p1;
	day = p2;
}

void DayOfYear::input()
{
	cout << "enter month" << endl;
	cin >> month;
	cout << "enter date" << endl;
	cin >> day;
}


void DayOfYear::output()
{
	cout << "month = " << month << "\n day = " << day << endl;
}

void DayOfYear::set(int nmonth, int nday)
{
	month = nmonth;
	day = nday;
}

int DayOfYear::getMonth()
{
	return month;
}

int DayOfYear::getDay()
{
	return day;
}
