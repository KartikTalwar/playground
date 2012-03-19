#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(string word);

int main()
{
	string fname, lname, full;
	
	cout << "Enter your first name: " << endl;
	cin >> fname;
	
	cout << "Enter your last name: " << endl;
	cin >> lname;
	
	full = fname + " " + lname;
	cout << "Full Name: " << full << endl;
	cout << "Length of your name: " << fname.length() + lname.length() << endl;
	
	string anything("This is a random sentence");
	cout << anything << endl;
	getline(cin, anything);
	cout << anything << endl;
	
	
	string str("Python");
	cout << str.at(5) << endl;
	cout << str[5] << endl;
	
	
	cout << isPalindrome("12321") << endl;
	
	
	
	
	// Other methods
	
	fname += lname;
	full.empty(); // bool
	fname.insert(0, "Mr ");
	lname.remove(0, "T");
	fname.find("r");
	
	
	return 0;
}


bool isPalindrome(string word)
{
	for(int i = 0; i < (word.length())/2; i++)
	{
		if(word[word.length()-i-1] != word[i])
		{
			return false;
		}
	}
	
	return true;
}


