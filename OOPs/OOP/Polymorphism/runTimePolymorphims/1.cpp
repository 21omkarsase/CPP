//Method overriding
//achieved by only using inheritance only


// methods with same name and no of parameters
#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
	void speak(){
		cout<<"Speaking...\n";
	}
};

class Dog:public Animal{
public:
	void speak(){
		cout<<"Barking...\n";
	}
};

int main(){
	
	Animal a;
	Dog d;
	d.speak();
	return 0;
}

