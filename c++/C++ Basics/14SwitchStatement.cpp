#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	char grade;
	
	cout << "Enter your grade: " << endl;
	cin >> grade;
	
	switch(grade)
	{
		case 'A':
			cout << "80+" << endl;
			break;
		case 'B':
			cout << "70+" << endl;
			break;
		case 'c':
			cout << "50+" << endl;
			break;
		default:
			cout << "You failed" << endl;
	}
	
	return 0;
}
