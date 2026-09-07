#include <iostream>
#include "Simulation.h"

int main()
{
	Simulation simulation;

	int choice = 0;

	while (choice != 3)
	{
		std::cout << "\n=== Mutation Virus Simulation ===\n";
		std::cout << "1. Start Simulation\n";
		std::cout << "2. Display Statistics\n";
		std::cout << "3. Exit\n";
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			simulation.InitializePopulation(100);
			simulation.Run();
			break;

		case 2:
			simulation.DisplayStatistics();
			break;

		case 3:
			std::cout << "exiting program...\n";
			break;

		default:
			std::cout << "Invalid choice.\n";
			break;
		}
	}

	return 0;
}