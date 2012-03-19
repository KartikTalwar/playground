#include <stdio.h>
#include <iostream>
using namespace std;


template <class T>
void swap(T& a, T& b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}


int main()
{
	int v1 = 23, v2 = 42;

	cout << "Original :" << v1 << "|" << v2 << endl;
	swap(v1, v2);
	cout << "Swapped :" << v1 << "|" << v2 << endl;

        char s1 = 'a', s2 = 'b';

        cout << "Original :" << s1 << "|" << s2 << endl;
        swap(s1, s2);
        cout << "Swapped :" << s1 << "|" << s2 << endl;

	return 0;
}
