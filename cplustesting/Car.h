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
	virtual int Turn();
};

class Racecar : public Car {
public:
	Racecar(string temp);
	int Turn();
};

class StreetCar : public Car {
public:
	StreetCar(string temp);
	int Turn();
};

class Truck : public Car {
public:
	Truck(string temp);
	int Turn();
};

