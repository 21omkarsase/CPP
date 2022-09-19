#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
	int age;
	int weight;

	void speak(){
		cout<<"Animal speaking..."<<"\n";
	}
};

class Human{
public:
	void speak(){
		cout<<"Human speaking..."<<"\n";
	}
};

class Student : public Animal,public Human{
public:
};

int main(){
	Student obj;
	// obj.speak();  class animal and human have speak function
	               // so it will give err related to ambiguity
    
    //solution:
    obj.Animal::speak();
    obj.Human::speak();
    	
	return 0;
}