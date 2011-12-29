#ifndef STACK_H
#define STACK_H

namespace myStack
{
	class Stack
	{
		int maxStack;
		int emptyStack;
		int top;
		char* items;

		public:
			Stack(int);
			~Stack();
			void push(char the_symbol);
			char pop();
			int empty();
			int full();
	};
}

#endif // STACK_H
