#include <stdio.h>
#include <iostream>
#include <string>
#include <cctype>

void swap(char& a, char& b);
bool isPalindrome(const std::string& word);

std::string reverse(const std::string& str);
std::string removePunct(const std::string& src);
std::string toLower(const std::string& s);

int main()
{
	using namespace std;
	string str;
	
	str = "Madam, I'm Adam.'";
	
	if(isPalindrome(str))
	{
		cout << str << " is a palindrome" << endl;
	}
	else
	{
		cout << str << " is not a palindrome" << endl;
	}

	cout << toLower(removePunct(str)) << endl;
}


void swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}



bool isPalindrome(const std::string& word)
{
	using namespace std;
	string sentence = toLower(removePunct(word));
	for(int i=0; i< (word.length())/2; i++)
	{
		if(sentence[sentence.length()-1-i] != sentence[i])
		{
			return false;
		}
	}
	
	return true;
}



std::string reverse(const std::string& str)
{
	using namespace std;
	
	int start = 0;
	int end = str.length();
	
	string temp = str;
	
	while(start < end)
	{
		end--;
		swap(temp[start], temp[end]);
		start++;
	}
	
	return temp;
}



std::string toLower(const std::string& s)
{
	using namespace std;
	
	string temp = s;
	
	for(int i = 0; i < s.length(); i++)
	{
		temp[i] = tolower(s[i]);
	}
	
	return temp;
}



std::string removePunct(const std::string& src)
{
	using namespace std;
	
	string bad = "' ,.!?\";:";
	string clean;
	
	for(int i=0; i < src.length(); i++)
	{
		string character = src.substr(i, 1);
		int location = bad.find(character, 0);
		
		if(location < 0 || location >= bad.length())
		{
			clean = clean+character;
		}
	}
	
	return clean;
}




