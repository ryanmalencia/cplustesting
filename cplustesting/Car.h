using namespace std;
#include <string>
#pragma once

class Car
{
protected:
	std::string name;
	int wheels;
	int Moving;
public:
	Car();
	Car(string temp);
	~Car();
	string GetName();
	int Location;
	int GetWheels();
	int SetWheels(int i);
	int Move();
	int GetLocation();
};

class Racecar : public Car {
public:
	Racecar(string temp);
};

class StreetCar : public Car {
public:
	StreetCar(string temp);
};

class Truck : public Car {
public:
	Truck(string temp);
};

