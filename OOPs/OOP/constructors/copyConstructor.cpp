#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
	char level;

public:
	int health;
	char *name;

	Hero()
	{
		cout << "Simple constructor called" << endl;
		name = new char[100];
	}

	Hero(int health, char level, char name[])
	{
		this->health = health;
		this->level = level;
		this->name = name;
	}

	Hero(Hero &obj)
	{ // copy constructor
		cout << "Copy Constructor"
			 << "\n";
		this->health = obj.health;
		this->level = obj.level;

		char *ch = new char[strlen(obj.name) + 1];
		strcpy(ch, obj.name);
		this->name = ch;
	}

	void setLevel(char c)
	{
		level = c;
	}

	char getLevel()
	{
		return level;
	}

	void setHealth(int health)
	{
		this->health = health;
	}

	void setname(char name[])
	{
		strcpy(this->name, name);
	}

	void printDetails()
	{
		cout << "Name : " << this->name << ", "
			 << "Level : " << this->level << ", Health : " << this->health << "\n";
	}
};
int main()
{

	// //Static obj creation
	// Hero h5(20,'z');

	// //Dynamic obj creation
	//    Hero *h6 = new Hero(h5.health,'a');

	//    //creating copy of obj using copy constructor
	//    Hero S(70,'A');
	//    Hero R(S);

	//    Hero* omkar = new Hero(100,'d');
	//    Hero* sase = new Hero(*omkar);  //pass obj by de referncing in dynamic allocation

	// hero1->health=100;
	// hero1->setLevel('z');
	// hero1->name[0]='a';

	// hero1->printDetails();




	//    ****************Shallow copy*******************
	// when we create copy using default copy constructor
	// then properties created using pointer will get updated in all
	// in all objects

	//    ****************Deep copy*******************
	//    when we create copy of obj using our own constructor
	//    by creating new property at heap every time,
	//    it will not change property in all objects

	Hero h1;
	h1.setHealth(100);
	h1.setLevel('u');
	char name[6] = "omkar";
	h1.setname(name);

	cout << "Before : "
		 << "\n";
	h1.printDetails();

	Hero h2(h1);
	h2.printDetails();

	h1.name[0] = 'a';
	h1.health = 101;
	h1.setLevel('z');
	cout << "After : "
		 << "\n";
	h1.printDetails();
	h2.printDetails();


	//*************Copy Assignment operator (=)*********
	h2=h1;

	h2.printDetails();

    h1.name[0]='z';
    h1.printDetails();
    h2.printDetails();

	return 0;
}