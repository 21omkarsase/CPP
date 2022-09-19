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

	~Hero(){
		cout<<"Destructor called"<<"\n";
	}	
};
int main()
{

   //default destructor will get called automatically for 
   //static constructor
   //we can create our own desturctor


	//static
	Hero a;

	//dynamic
	Hero *b = new Hero();
    //for dynamic we explicitly release memory
    //then destructor called
    delete b;
    
	return 0;
}