#include "Simulation.h"
#include <iostream>
#include <cstdlib>

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
	int infected = 0;
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

	int totalPopulation = static_cast<int>(population.size());

	double uninfectedPercent = (uninfected * 100.0) / totalPopulation;
	double infectedPercent = (infected * 100.0) / totalPopulation;
	double mutatedPercent = (mutated * 100.0) / totalPopulation;
	double deadPercent = (dead * 100.0) / totalPopulation;


	std::cout << "\n==== Detailed Simulation Results====\n";
	std::cout << "Turn: " << currentTurn << "\n\n";

	std::cout << "Total Population: " << totalPopulation << "\n";

	std::cout << "Uninfected: " << uninfected
		<< " (" << uninfectedPercent << "%)\n";
	
	std::cout << "Infected: " << infected
		<< " (" <<  infectedPercent << "%)\n";

	std::cout << "Mutated: " << mutated
		<< " (" <<mutatedPercent << "%)\n";

	std::cout << "dead: " << dead
		<< " ("  << deadPercent << "%)\n";

	std::cout << "====================================\n";
}
void Simulation::ProcessMutations()
 {
		for (Person& person : population)
		{
			if (person.GetState() == PersonState::INFECTED)
			{
				person.IncrementInfectionTime();

				if (person.GetinfectionTime() >= 3)
				{
					double chance = static_cast<double>(rand()) / RAND_MAX;

					if (chance < virus.GetMutationrate())
					{
						person.SetState(PersonState::MUTATED);
					}
				}
			}
		}
	}
void Simulation::ProcessDeaths()
{
	for (Person& person : population)
	{
		if (person.GetState() == PersonState::MUTATED)
		{
			double chance = static_cast<double>(rand()) / RAND_MAX;

			if (chance < virus.GetMortalityRate())
			{
				person.SetState(PersonState::DEAD);
			}
		}
	}
}


	void Simulation::ProcessInfections()
	{
		for (Person& person : population)
		{
			if (person.GetState() == PersonState::UNINFECTED)
			{
				double chance = static_cast<double>(rand()) / RAND_MAX;

				if (chance < virus.GetInfectionRate())
				{
					person.SetState(PersonState::INFECTED);
				}
			}
		}
	}

void Simulation::AdvanceTurn()
{
	currentTurn++;
	
	ProcessMutations();
	ProcessDeaths();
	ProcessInfections();

	std::cout << "\n12 hours have passed. The virus is spreading...\n";
}

void Simulation::Run()
{

	for (int i = 0; i < 10; i++)
	{
		AdvanceTurn();
	}

	DisplayStatistics();
}