#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	// Sample 1 - shows that array is ~ pointer
	typedef int* intptr;
	intptr p;
	int a[10];
	
	for(int i=0; i<10; i++)
	{
		a[i] = i+1;
	}
	
	p = a;
	
	
	// Dynamic Arrays - creates a dynamic array of size 10
	typedef double* dptr;
	dptr d;
	d = new double[10];
	
	delete [] d;
	
}
