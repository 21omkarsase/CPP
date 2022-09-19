#include <iostream>
using namespace std;

class Vehicle
{
private:
public:
    static string type;
};

class Car : public Vehicle
{
    static int topSpeed;

public:
    int speed;
    void printTopSpeed();
};

void Car::printTopSpeed()
{
    cout << Car::topSpeed << "\n";
}

int main()
{
    Vehicle v;

    Car obj;
    obj.int x = Car::topSpeed;
    return 0;
}