#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	double *p;
	int *p1, *p2, v3;
	
	v3 = 0;
	
	p1 = &v3;
	*p2 = 40;
	
	cout << *p2 + 2 << endl;	// 42
	
	
	typedef int* intPtr;
	intPtr newp1, newp2;
	
	
	
	return 0;
}
