#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

namespace myEmployees
{
	class Employee;
	{
		public:
			Employee();
			Employee(string new_name, string new_sin);
			string getName();
			string getSIN();
			void changeName(string new_name);
			void changeSIN(string new_sin);
			void printPay();
			void getRaise(double amount);
		protected:
			string name;
			string sin;
			double pay;
	};
}

#endif
