#include <stdio.h>
#include <iostream>
using namespace std;


int search(int array[], int tofind);

int main()
{
	int array[13] = {1,2,3,4,5,6,7,8,9,10,11,12}; 
	int tofind = 9;
	
	int answer = search(array, tofind);
	
	cout << answer << endl;
}

int search(int array[], int tofind)
{
	bool found = false;
	int index = 0;
	int i = 0;
	
	while(found == false)
	{
		if(array[i] == tofind)
		{
			found = true;
			index = i;
		}
		i++;	
	}
	
	return index;
}

