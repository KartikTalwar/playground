#include <stdio.h>
#include <iostream.h>
#include <fstream.h>


void simpleReplace(ifstream& ins, ofstream& ons);

int  main()
{
	using namespace std;
	char input;

	cout << "Enter a line to print it again: " << endl;


	do
	{
		cin.get(input);
		cout << input << endl;
	} while (input != '\n' );



	ifstream ins;
	ofstream ons;

	ins.open("test.txt");
	ons.open("testout.txt");

	if ( ! ins.eof() )
	{
		cout << "still reading" << endl;
	}
	else
	{
		cout << "done reading" << endl;
	}


	simpleReplace(ins, ons);

	ins.close();
	ons.close();

	return 0;
}

void simpleReplace(ifstream& ins, ofstream& ons)
{
	char next;

	ifs.get(next);

	while( ! ins.eof() )
	{
		if ( next == 'k')
		{
			ons << "K";
		}
		else
		{
			ons << next;
		}

		ins.get(next);
	}
}
