#include <stdio.h>
#include <iostream>
#define count(a) ( sizeof(a)/sizeof(*a))
using namespace std;


void sort(int array[]);
void swap(int& a, int& b);


int main()
{
	int array[10] = {1,6,8,9,24,3,4,84,65,21};
	
	sort(array);
	
	for(int i = 0; i < count(array); i++)
	{
		cout << array[i] << endl;
	}
	
	return 0;
}


void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sort(int array[])
{
	for(int i = 0; i < count(array); i++)
	{
		for(int j = 0; j < count(array)-1-i; j++)
		{
			if(array[j+1] < array[j])
			{
				swap(array[j], array[j+1]);
			}
			
		}
	}
}


