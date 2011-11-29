#include <stdio.h>
#include <iostream.h>
#include <fstream.h>
#include <cstdlib.h>

int main()
{
	using namespace std;
	ifstream in_stream;
	ofstream out_stream;
	char inputFile[16], outputFile[16];

	cout << "Enter an input file name:" << endl;
	cin >> inputFile;
	cout << "Enter an output file name: " << endl;
	cin >> outputFile;

	in_stream.open(inputFile);

	if( in_stream.fail() )
	{
		cout << "opening file failed bro" << endl;
		exit(1);
	}


	out_stream.open(outputFile);

	int first, second, third;

	in_stream >> first >> second >> third;
	out_stream << "The sum of the first 3\n"
		   << " numbers is input.txt\n"
		   << " is " << (first + second+ third) << endl;

	in_stream.close();
	out_stream.close();

	return 0;
}
