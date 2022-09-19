#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
	int age;
	int weight;

	void speak(){
		cout<<"Speaking..."<<"\n";
	}
};

class Human{
public:
	void doWork(){
		cout<<"Working.."<<"\n";
	}
};

class Student : public Animal,public Human{
public:
	void doStudy(){
		cout<<"Studying..."<<"\n";
	}
};

int main(){
	Student s;
	s.speak();
	s.doWork();
	s.doStudy();
	return 0;
}