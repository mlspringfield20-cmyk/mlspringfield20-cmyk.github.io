#include "Virus.h"

Virus::Virus()
{
	infectionRate = 0.28;
	mutationRate = 0.11;
	mortalityRate = 0.025;
}

double Virus::GetInfectionRate() const
{
	return infectionRate;
}

double Virus::GetMutationrate() const
{
	return mutationRate;
}

double Virus::GetMortalityRate() const
{
	return mortalityRate;
}