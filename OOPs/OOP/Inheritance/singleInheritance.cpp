#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
	int age;
	int weight;

	void speak()
	{
		cout << "Speaking..."
			 << "\n";
	}
	void printAnimalData()
	{
		cout << this->age << " : " << this->weight << " animal\n";
	}
};

class Dog : public Animal
{
public:
	void protectHouse()
	{
		cout << "Protecting house.."
			 << "\n";
	}
	void printDogData()
	{
		cout << this->age << " : " << this->weight << " dog\n";
	}
};

int main()
{
	Animal a;
	a.age = 20;
	a.weight = 60;
	a.printAnimalData();

	Dog d;
	d.age = 10;	   // we need to set values for inherited properties also
				   // default animal property values will not be inherited
				   // only property name will be inherited
	d.weight = 40; // we need to set values for inherited properties also
				   // default animal property values will not be inherited
				   // only property name will be inherited
	d.speak();
	d.protectHouse();
	d.printDogData();

	return 0;
}