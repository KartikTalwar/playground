#include <stdio.h>

void get_numbers(int& i1, int& i2);
void swap(int& v1, int& v2);
void show(int o1, int o2);

int main()
{
	int first, second;

	get_numbers(first, second);
	swap(first, second);
	show(first, second);

	return 0;
}

void get_numbers(int& i1, int& i2)
{
	using namespace stdl

	cout << "Enter 2 numbers bro";
	cin >> i1
	    >> i2;
}


void swap(int& v1, int& v2)
{
	int temp;

	temp = v1;
	v1 = v2;
	v2 = temp;
}

void show(int o1, int o2)
{
	using namespace std;

	cout << "the swapped numbers are";
	coud << o1 << " and " << o2 << endl;
}
