#include<bits/stdc++.h>
#include "Hero.cpp"
using namespace std;

class Empty{

};

int main(){

	//static allocation
	Hero omkar;
	Empty emp;

	cout<<"size of omkar object : "<<sizeof(omkar)<<"\n";  // 4
	cout<<"size of empty object : "<<sizeof(emp)<<"\n";	   // 1

	//accessing properties
	omkar.health=100;
	cout<<omkar.health<<"\n";

	//private variables
	omkar.setLevel('a');

	cout<<omkar.getLevel()<<"\n";

	cout<<sizeof(omkar)<<"\n";

    cout<<"\n"<<"dynamic allocation"<<"\n\n";
 
	//Dynamic allocation
	Hero *h1 = new Hero;
	cout<<sizeof(h1)<<"\n";

	(*h1).health=200;     //<-- h1.health=300 -->
	(*h1).setLevel('c');  //<-- h1->setLevel('c') -->
    
    h1->health=300;
    cout<<h1->getLevel()<<"\n";
    cout<<h1->health<<"\n";

	return 0;
}