// cplustesting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Car.h"
#include "Race.h"
#include <string>
#include <iostream>

using namespace std;

class Motorcycle : public Car
{
public:
	Motorcycle(string temp);
};

Motorcycle::Motorcycle(string temp)
{
	Location = 0;
	name = temp;
	wheels = 2;
	Moving = 8;
}

int main()
{
	Race *race = new Race("Testing");
	Car *car1 = new Racecar("Racecar");
	Car *car2 = new Motorcycle("Motorcycle");
	Car *car3 = new Truck("Truck");
	Car *car4 = new StreetCar("StreetCar");
	Car *winner;
	int i = 0;
	race->AddRacer(car1);
	race->AddRacer(car2);
	race->AddRacer(car3);
	race->AddRacer(car4);
	race->ListRacers();
	race->Continue();


	winner = race->GetWinner();
	cout << "Winner: " << winner->GetName() << ": " << winner->GetLocation();
	race->CleanUp();
    return 0;
}

