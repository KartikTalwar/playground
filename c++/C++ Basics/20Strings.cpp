#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>
using namespace std;

int main()
{
	char fname[7] = "Kartik";
	char lname[] = "Talwar";
	char initials[] = {'k', 't'};
	char first[7];
	char full[14];
	
	
	cout << fname << endl;
	cout << lname << endl;

	if(strcmp(fname, lname))
	{
		cout << "The strings are same" << endl;
	}
	else
	{
		cout << "They are different" << endl;
	}
	
	
	strcpy(first, "Kartik");
	
	cout << first << endl;
	
	
	cout << "Length of my first name is " << strlen(fname) << endl;
	cout << "My full name is " << strcat(full, "Kartik Talwar") << endl;
	
}
