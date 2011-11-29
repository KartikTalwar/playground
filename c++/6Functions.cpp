#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int a, calc;

	cout << "enter a number" << endl;
	cin >> a;

	calc = myfcn(a);

	cout << calc << endl;
}

int myfcn(int a)
{
	cont TO_ADD = 4;
	int b = a + TO_ADD;

	return b;
}
