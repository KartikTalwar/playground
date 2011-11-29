#include <stdio.h>
using namespace std;

int main()
{
	int a = 3;
	int b = 2;

	if( a > b)
	{
		cout << "a is more than b";
	}
	else if ( (a+2) < b)
	{
		cout << "a plus 2 is more than b ";
	}
	else
	{
		cout << "b is more than a";
	}

	return 0;
}
