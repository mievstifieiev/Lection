#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Human.h"
#include "Teacher.h"

class Room
{
private:
	Human** humans;
	
public:
	Room(Human** humans_);
	~Room();
	void Sound_Propagation(std::string speech);
};

