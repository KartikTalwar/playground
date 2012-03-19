#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;


struct Box
{
	char name[10];
	int number;
	Box *next;
};


typedef Box* BoxPtr;

int main()
{
	BoxPtr head;

	head = new Box;
	strcpy(head->name, "FedEx");
	head->number = 42;

	cout << (*head).name << endl;
	cout << head->name << endl;
	cout << (*head).number << endl;
	cout << head->number << endl;

	return 0;
}
