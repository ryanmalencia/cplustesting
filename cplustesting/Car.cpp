#include "stdafx.h"
#include <stdlib.h>
#include <string>
#include "Car.h"

using namespace std;

Car::Car()
{
	Location = 0;
	Moving = 3;
}


Car::~Car()
{
	Moving = 3;
}

Car::Car(string temp)
{
	Location = 0;
	name = temp;
	Moving = 3;
}

StreetCar::StreetCar(string temp)
{
	Location = 0;
	name = temp;
	wheels = 4;
	Moving = 4;
}

Racecar::Racecar(string temp)
{
	Location = 0;
	name = temp;
	wheels = 3;
	Moving = 5;
}

Truck::Truck(string temp)
{
	Location = 0;
	name = temp;
	wheels = 6;
	Moving = 2;
}

string Car::GetName()
{
	return name;
}

int Car::GetWheels()
{
	return wheels;
}

int Car::SetWheels(int i)
{
	wheels = i;
	return wheels;
}

int Car::Move()
{
	Location += Moving;
	return 0;
}

int Car::GetLocation()
{
	return Location;
}