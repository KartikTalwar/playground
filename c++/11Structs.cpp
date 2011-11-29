#include <stdio.h>
using namespace std;

struct myStruct
{
	double v1;
	double v2;
	int v3;
};

myStruct testfcn(double v1, double v2, int v3);

int main()
{
	myStruct test;

	double t1, t2;
	int t3;


	test.v1 = 5.5;
	test.v2 = 3.14;
 	test.v3 = 2;

	t1 = test.v1;
	t2 = test.v2;
	t3 = test.v3;

	cout << t1 << t2 << t3 << endl;


	myStruct test2;
	test2 = testfcn(5.6, 2.732, 11);

	cout << test2 << endl;


	// initialize a struct

	myStruct test3 = {1.414, 3.161, 42};


	return 0;
}

myStruct testfcn(double v1, double v2, int v3)
{
	myStruct temp;

	temp.v1 = v1;
	temp.v2 = v2;
	temp.v3 = v3;

	return temp;
}
