#include <stdio.h>
#include <iostream>
using namespace std;

class Pet
{
	public:
		virtual void print();
		string name;
};

class Dog: public Pet
{
	public: 
		virtual void print();
		string breed;
};

int main()
{
	Dog vdog;
	Pet vpet;
	
	vdog.name = "Scooby";
	vdog.breed = "German Shepherd";
	vpet = vdog;
	
	Pet *ppet;
	ppet = new Pet;
	Dog *pdog;
	pdog = new Dog;
	
	pdog->name = "Scooby";
	pdog->breed = "German Shepherd";
	
	ppet = pdog;
	ppet->print();
	pdog->print();
	
	return 0;
}


void Dog::print()
{
	cout << "Name : " << name << endl;
	cout << "Breed : " << breed << endl;
}

void Pet::print()
{
	cout << "Name : " << name << endl;
}









