#include <stdio.h>
#include <iostream>
using namespace std;

void displaySomething(const char p[][10], int dim);

int main()
{
	char something[50][100];
	int matrix[2][3];
	double inception[10][20][30];
	char p[3][10];
	
	displaySomething(p, 2);
}


void displaySomething(const char p[][10], int dim)
{
	for(int i = 0; i < dim; i++)
	{
		for(int j = 0; j < 50; j++)
		{
			cout << p[i][j] << endl;
		}
	}
}
