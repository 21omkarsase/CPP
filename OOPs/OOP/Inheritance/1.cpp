#include <bits/stdc++.h>
using namespace std;

class Human
{
private:
	string country;

public:
	int height;
	int weight;
	int age;

public:
	int getAge()
	{
		return this->age;
	}

	void setWeight(int weight)
	{
		this->weight = weight;
		this->country = "India";
	}
};

// public:
//(1)public specified child class can access all public members of parent
//  i.e class Male : public Human will access all public members of Human
//(2)public specified child clsass can not access private members of parent
// i.e class Male : public Human will not able access private members of Human
// country will not be accessible from
class MalePublic : public Human
{
public:
	string color;

	void sleep()
	{
		cout << "Male is sleeping"
			 << "\n";
		// we can not access private variables inside derived classs
		//  cout<<"country is : "<<this->country<<"\n"; //it will give err since it is private in Human class
	}
};

class MalePrivate : private Human
{
public:
	string color;

	void sleep()
	{
		cout << "Male is sleeping"
			 << "\n";
		// we can not access private variables inside derived classs
		//  cout<<"country is : "<<this->country<<"\n"; //it will give err since it is private in Human class
	}
};

int main()
{

	// protected data membersncan be accessed by derived classes or child classes

	MalePublic male1;

	male1.setWeight(23);
	cout << male1.weight << "\n";

	male1.sleep();
	cout << male1.color << "\n";

	MalePrivate male2;

	return 0;
}