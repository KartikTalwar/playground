#include <stdio.h>
#include <iostream>
#define count(a) ( sizeof(a)/sizeof(*a) )
using namespace std;

void fillArray(int a[], int size);

int main()
{
	int prime[5] = {1,3,5,7,11};
	int dummy[5], size;
	
	for(int i=0; i < count(prime); i++)
	{
		cout << prime[i] << endl;
	}
	
	cout << "\n" <<endl;
	
	fillArray(dummy, 5);
}


void fillArray(int a[], int size)
{
	cout << "Enter " << size << " numbers\n";
	for(int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	
	size--;

	for(int j=0; j<size; j++)
	{
		cout << a[j] << endl;
	}
}

