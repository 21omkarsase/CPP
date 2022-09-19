// Compile time polymorphism (static polymorphism)
//   a)Function overloading
//   b)Operator overloading

#include<bits/stdc++.h>
using namespace std;

class A{
public:
	void sayHello(){
		cout<<"Hello omkar..."<<"\n";
	}
	void sayHello(string name){
		cout<<"Hello "<<name<<" ..."<<"\n";
	}

	// we can not achieve CTP by just changing 
	//return type of fun having same name

	// string sayHello(string name){
	// 	return name;
	// }

	string sayHello(string first, string last){
		return ("Hello "+first+" " +last);
	}

	//Default argument  (add default argument at last only)
	void sayHello(int age,string name="Omkar"){
		cout<<"Hello "<<name<<". You are "<<age<<" years old..."<<"\n";
	}
};

int main(){
	A obj;

	obj.sayHello();
	obj.sayHello("Omkar Sase");

	cout<<obj.sayHello("OMKAR","SASE")<<"..."<<"\n";

	obj.sayHello(20,"omkar");
	
	return 0;
}

