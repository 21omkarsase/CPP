#include <bits/stdc++.h>
using namespace std;

class Animal
{
protected:
	int prot;

public:
	int age;
	int weight;

	void speak()
	{
		cout << "Speaking..."
			 << "\n";
		cout << this->prot << "\n";
	}
	void setProt(int p)
	{
		prot = p;
		cout << "Setting protected to : " << prot << "\n";
	}
	void setWeight(int weight)
	{
		this->weight = weight;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	void printdata()
	{
		cout << this->age << " : " << this->weight << " : " << this->prot << " : animal\n";
	}
};

class Dog : public Animal
{
public:
	void protectHouse()
	{
		cout << "Protecting house.."
			 << "\n";
		cout << this->prot << " : dog prot\n";
		cout << this->weight << " : dog weight\n";
	}
	void printdata()
	{
		cout << this->age << " : " << this->weight << " : " << this->prot << " : dog\n";
	}
};

class GermanShepherd : public Dog
{
public:
	void runFast()
	{
		cout << "Running fast..."
			 << "\n";
	}
	void getTemp()
	{
		cout << this->prot << " : GermanShepeher prot \n";
		cout << this->weight << " : GermanShepeher weight \n";
	}
	void printdata()
	{
		cout << this->age << " : " << this->weight << " : " << this->prot << " : gs\n";
	}
};

int main()
{
	Animal a;
	a.setProt(1);
	a.setProt(2);
	a.setWeight(3);
	a.setAge(4);
	a.printdata();

	Dog d;
	d.setProt(10);
	d.setProt(11);
	d.setWeight(12);
	d.setAge(13);
	// we need to set values for inherited properties also
	// default animal property values will not be inherited
	// only property name will be inherited
	d.printdata();

	GermanShepherd g;
	g.setProt(21);
	g.setProt(22);
	g.setWeight(23);
	g.setAge(24);
	// we need to set values for inherited properties also
	// default animal property values will not be inherited
	// only property name will be inherited
	g.printdata();

	// g.speak();
	// g.protectHouse();
	// g.runFast();
	// g.getTemp();
	return 0;
}