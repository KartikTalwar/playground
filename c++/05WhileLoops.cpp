#include <stdio.h>
using namespace std;

int main()
{
	while(int countdown > 0)
	{
		cout << countdown << endl;
		countdown--;
	}

	char answer;

	do
	{
		cout << "Ask someone something \n"
		     << "Press y for yes n for no \n"
		     << endl;
		cin >> answer;
	} while (answer == 'y' || answer == 'Y');


	return 0;
}
