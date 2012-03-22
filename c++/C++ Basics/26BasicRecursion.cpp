#include <stdio.h>
#include <iostream>
using namespace std;

void printVertical(int n);

int main()
{
	printVertical(12321);
}

void printVertical(int n)
{
	if(n < 10)
	{
		cout << n << endl;
	}
	else
	{
		printVertical(n/10);
		cout << (n % 10) << endl;
	}
}
