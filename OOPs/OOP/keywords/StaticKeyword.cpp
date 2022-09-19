// Yes, values of the static variables can be changed.
// It is said static because only 1 copy or the original copy of a static variable is shared by all objects using it, whereas for non-static variables each object have its own copy of that variable.


#include<bits/stdc++.h>
using namespace std;

class Hero
{
private:
	char level;
public:
	int health;
	static int timeToComplete;

	static int random(){
		//we can't access this obj or we can not use this word inside static function
		//we can access only static member vars

		timeToComplete=5;
		return timeToComplete;

		// you cannot call a non-static method inside a static one.
		//only static methods can be called
	}
};

//initializing static var outside the class
int Hero::timeToComplete=10;  // :: scope resolution operator

int main(){

	//we can access static var without creating obj
	int s = Hero::timeToComplete;
	cout<<s<<"\n";

	//we can also access it and modify using objects
	Hero a;
	Hero b;
	b.timeToComplete=20;

	cout<<a.timeToComplete<<"\n";
	cout<<b.timeToComplete<<"\n";

	Hero::timeToComplete=30;

	cout<<Hero::timeToComplete<<"\n";


	//for calling static methods we don't need to create obj
    cout<<Hero::random()<<"\n";	
    cout<<Hero::timeToComplete<<"\n";
    
 	return 0;
}