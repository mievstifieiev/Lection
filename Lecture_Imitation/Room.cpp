#include "Room.h"

#include <iostream>


Room::Room(Human** humans_)
{
	this->humans = humans_;
}

Room::~Room()
{
	delete[] humans;
}

void Room::Sound_Propagation(std::string speech)
{
	for (int i = 0; i < sizeof(humans); i++)
	{
		this->humans[i]->Listen(speech);
	}
}
