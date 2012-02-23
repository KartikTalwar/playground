#include <stdio.h>
#include <iostream>
using namespace std;


namespace kartik
{
	void hello()
	{
		cout << "Oh, Hai!" << endl;
	}
}

namespace talwar
{
	void hello()
	{
		cout << "Oh, Hello!" << endl;
	}
}

void world()
{
	cout << "Hello, World!" << endl;
}

int main()
{
	{
		using namespace kartik;
		hello();
	}
	
	{
		using namespace talwar;
		hello();
	}
	
	world();
	
	return 0;
}
