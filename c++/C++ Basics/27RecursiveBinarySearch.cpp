#include <stdio.h>
#include <iostream>
using namespace std;

const int SIZE = 10;
void search(const int a[], int first, int last, int key, bool& found, int& location);

int main()
{
	int a[SIZE] = {1,3,5,7,9,11,13,15,17,19};
	const int indexFinal = SIZE-1;
	
	
	int key, location;
	bool found;
	key = 13;	// To Find
	
	search(a, 0, indexFinal, key, found, location);
	
	if(found)
	{
		cout << "Location : " << location << endl;
	}
	else
	{
		cout << "DNE" << endl;
	}
	
}

void search(const int a[], int first, int last, int key, bool& found, int& location)
{

	int mid;
	
	if(first > last)
	{
		found = false;
	}
	else
	{
		mid = (first + last)/2;
		
		if(key == a[mid])
		{
			found = true;
			location = mid;
		}
		else if (key < a[mid])
		{
			search(a, first, mid-1, key, found, location);
		}
		else
		{
			search(a, mid+1, last, key, found, location);
		}
	}
}









