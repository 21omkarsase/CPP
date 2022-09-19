#include<bits/stdc++.h>
using namespace std;

class Hero
{
private:
	char level;

public:
	int health;

	Hero(){   //default constructor
		cout<<"Default Constructor"<<"\n";
	}

	Hero(int health){  //parameterised constructor
		this->health=health;  //this is pointer that stores the address of that particular object
	}

	Hero(int health,char level){  //constructor overloading
		this->health=health;
		this->level=level;

	}

	void setLevel(char c){
		level=c;
	}

	char getLevel(){
		 return level;
	}
};
int main(){

    //Static obj creation
	Hero h1;
	Hero h2(10);
	Hero h5(20,'z');



	//Dynamic obj creation
    Hero *h3 = new Hero;
	Hero *h4 = new Hero(h2.health);
    Hero *h6 = new Hero(h5.health,'a');

    cout<<h6->health<<" "<<h6->getLevel()<<"\n";


 	return 0;
}