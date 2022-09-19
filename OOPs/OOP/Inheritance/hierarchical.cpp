#include<bits/stdc++.h>
using namespace std;

class A{
public:
	void fun1(){
		cout<<"fun1 called.."<<"\n";
	}
};

class B:public A{
public:
	void fun2(){
		cout<<"fun2 called.."<<"\n";
	}
};

class C:public B{
public:
	void fun3(){
		cout<<"fun3 called.."<<"\n";
	}
};


int main(){

	B b;
	b.fun2();
	b.fun1();

    cout<<"\n\n";
    
	C c;
	c.fun3();
	c.fun1();
	
	return 0;
}

//Hybird Inheritance
// combination of two or more than 2 classes>