#include <stdio.h>
#include <iostream>
#include <cstddef>
#include "32Stack.h"

using namespace std;
using namespace myStack;


namespace myStack
{
	Stack::Stack(int size)
	{
		maxStack = size;
		emptyStack = -1;
		top = emptyStack;
		items = new char[maxStack];
	}

	Stack::~Stack()
	{
		delete [] items;
	}

	void Stack::push(char c)
	{
		items[++top] = c;
	}

	char Stack::pop()
	{
		return items[top--];
	}

	int Stack::full()
	{
		return (top+1 == maxStack);
	}

	int Stack::empty()
	{
		return top == emptyStack;
	}

}


int main()
{
	using namespace myStack;

	Stack s(10);
	char ch;

	while((ch = cin.get()) != '\n')
	{
		if(!s.full())
		{
			s.push(ch);
		}
	}

	while(!s.empty())
	{
		cout << s.pop() << endl;
	}

	return 0;

}
