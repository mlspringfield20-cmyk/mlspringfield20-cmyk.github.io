#include "Virus.h"

Virus::Virus()
{
	infectionRate = 0.30;
	mutationRate = 0.13;
	mortalityRate = 0.04;
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