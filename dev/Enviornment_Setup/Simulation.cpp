#include "Simulation.h"
#include <iostream>

Simulation::Simulation()
{
	currentTurn = 0;
}

void Simulation::InitializePopulation(int size)
{
	population.clear();

	for (int i = 0; i < size; i++)
	{
		population.push_back(Person(i));
	}

	if (!population.empty())
	{
		population[0].SetState(PersonState::INFECTED);
	}
}

void Simulation::DisplayStatistics() const
{
	int uninfected = 0;
	int infected = 1;
	int mutated = 0;
	int dead = 0;

	for (const Person& person : population)
	{
		switch (person.GetState())
		{
		case PersonState::UNINFECTED:
			uninfected++;
			break;

		case PersonState::INFECTED:
			infected++;
			break;

		case PersonState::MUTATED:
			mutated++;
			break;

		case PersonState::DEAD:
			dead++;
			break;
		}
	}

	std::cout << "\n==== Statistics =====\n";
	std::cout << "Turn: " << currentTurn << '\n';
	std::cout << "Uninfected: " << uninfected << '\n';
	std::cout << "Infected: " << infected << '\n';
	std::cout << "Mutated: " << mutated << '\n';
	std::cout << "Dead: " << dead << '\n';
}

void Simulation::AdvanceTurn()
{
	currentTurn++;

	for (Person& person : population)
	{

		if (person.GetState() == PersonState::INFECTED)
		{
			person.IncrementInfectionTime();
		}
	}

	std::cout << "\n12 hours have passed. The virus is spreading...\n";
}