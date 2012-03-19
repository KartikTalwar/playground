#include <iostream.h>

using namespace std;

int main()
{
	int variable1, variable2;
	char var3;
	double var4, var5;

	cout << "Please enter something. \n";
	cin >> variable1;
	cout << "Now enter a letter" ;
	cin >> var3

	variable2 = variable1 + 2;
	var4 = variable2 * 3.14;
	var5 = var4 * 2.00;

	cout << "The input plus two is : ";
	cout << variable2 ;
	cout << "The letter entered was : "; 
	cout << var3 << "\n" << (var4 + 1);
	cout << "Now the next line is blank" ;
	cout << endl;
	cout << "Another calc is $" << var5 << endl;


	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.percision(3);





	return 0;
}
