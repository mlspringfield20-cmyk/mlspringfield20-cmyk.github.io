#pragma once

class Virus
{
private:
	double infectionRate;
	double mutationRate;
	double mortalityRate;

public: 
	Virus();

	double GetInfectionRate() const;
	double GetMutationrate() const;
	double GetMortalityRate() const;
};