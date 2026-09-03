#include "Person.h"

Person::Person(int personID)
{
	id = personID;
	state = PersonState::UNINFECTED;
	infectionTIme = 0;
}

int Person::GetID() const
{
	return id;
}

PersonState Person::GetState() const
{
	return state;
}

int Person::GetInfectionTime() const
{
	return infectionTime;
}

void Person::SetState(PersonState newState)
{
	state = newState;
}

void Person::IncrementInfectionTime()
{
	infectionTime++;
}