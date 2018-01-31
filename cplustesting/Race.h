using namespace std;
#pragma once
#include <string>
#include "Car.h"

class Race
{
protected:
	std::string name;
	
public:
	int count;
	Race();
	Race(string name);
	int AddRacer(Car *racer);
	int Continue();
	int ListRacers();
	bool CleanUp();
	Car *GetWinner();
};