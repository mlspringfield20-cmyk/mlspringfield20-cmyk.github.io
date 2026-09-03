#pragma once

enum class PersonState
{
	UNINFECTED,
	INFECTED,
	MUTATED,
	DEAD
};

class Person
{
private:

	int id;
	PersonState state;
	int InfectionTime;

public:

	int GetID() const;
	PersonState GetState() const;
	int GetInfectionTime() const;

	void SetState(PersonState newState);
	void IncrementInfectionTime();
};

