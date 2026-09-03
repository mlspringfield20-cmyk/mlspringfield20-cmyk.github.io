#pragma once

#include <vector>
#include "Person.h"
#include "Virus.h"

class Simulation
{
private: 
	std::vector<Person> population;
	Virus virus;
	int currentTurn;

public:
	Simulation();

	void InitializePopulation(int size);
	void AdvanceTurn();
	void DisplayStatistics() const;
	void Run();
};