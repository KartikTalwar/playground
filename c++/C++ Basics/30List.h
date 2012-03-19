#ifndef LIST_CPP
#define LIST_CPP

#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

namespace kartik
{
	template<class T>
	List<T>::List(int max)
	{
		maxLen = max;
		currLen = 0;
		item = new T[max];
	}

	template<class T>
	List<T>::~List()
	{
		delete [] item;
	}

	template<class T>
	int List<T>::length() const
	{
		return (currLen);
	}

	template<class T>
	void List<T>::add(T newItem)
	{
		if(full())
		{
			cout << "full" << endl;
		}
		else
		{
			item[currLen] = newItem;
			currLen = currLen+1;
		}
	}


	template<class T>
	int List<T>::full() const
	{
		return (currLen == maxLen);
	}


	template<class T>
	void List<T>::erase()
	{
		currLen = 0;
	}

	template<class T>
	ostream& operator <<(ostream& outs, const List<T>& theList)
	{
		for(int i = 0; i < theList.currLen; i++)
		{
			outs << theList.item[i] << endl;
		}

		return outs;
	}

}

#endif
