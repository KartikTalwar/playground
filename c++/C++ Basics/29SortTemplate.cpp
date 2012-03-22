#include <stdio.h>
#include <iostream>
#define count(n)( sizeof(n)/sizeof(*n) )
using namespace std;


template <class T>
void swap(T& a, T& b)
{
	T temp;
	a = b;
	b = temp;
}


template <class T>
void indexOfSmallest(const T a[], int start, int n)
{
	T min = a[start];
	int imin = start;

	for(int i=start+1; i<n; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
			imin = i;
		}
	}

	return imin;
}


template <class T>
void bubbleSort(T a[])
{
	for(int i=0; i < count(a); i++)
	{
		for(int j=0; j< count(a)-1-i; j++)
		{
			if(a[j+1] < a[j])
			{
				swap(a[j], a[j+1]);
			}
		}
	}
}



template <class T>
void secondSort(T a[], int n)
{
	int ismall;
	for(int i=0; i<n-1; i++)
	{
		ismall = indexOfSmallest(a, i, n);
		swap(a[i], a[ismall]);
	}
}



int main()
{
	return 0;	// too lazy to put up an example
}
