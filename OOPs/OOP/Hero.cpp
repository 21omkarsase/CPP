#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
	char level;

public:
	int health;

	void setLevel(char c){
		level=c;
	}

	char getLevel(){
		 return level;
	}
};