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
	int infectionTime;

public:
	Person(int personID);

	int GetID() const;
	PersonState GetState() const;
	int GetinfectionTime() const;

	void SetState(PersonState newState);
	void IncrementInfectionTime();
};

