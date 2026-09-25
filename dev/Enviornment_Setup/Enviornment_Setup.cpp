#include <iostream>
#include "Simulation.h"

int main()
{
	Simulation simulation;

	simulation.InitializePopulation(10000000);

	int choice = 0;

	while (choice != 4)
	{
		std::cout << "\n=== Mutation Virus Simulation ===\n";
		std::cout << "1. Advance Simulation\n";
		std::cout << "2. Display Statistics\n";
		std::cout << "3. Exit\n";
		std::cout << "Enter your choice: ";
		
		if (!(std::cin >> choice))
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');

			std::cout << "Invalid imput. Please enter a number from the menu.\n";
			continue;
		}

		switch (choice)
		{
		case 1:
		{

			simulation.AdvanceTurn();
				break;

		}

		case 2:
		{

			simulation.DisplayStatistics();
			break;
		}

		case 3:
			for (int i = 0; i < 1; i++)
			{
				simulation.AdvanceTurn();
			}
			break;

		case 4:
		{

			std::cout << "Exiting program\n";
			break;

		}
		default:
		{

			std::cout << "Invalid choice\n";
			break;
		}
			
		}
	}

	return 0;
}