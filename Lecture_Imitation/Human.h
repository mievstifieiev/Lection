#pragma once
#include <iostream>
#include <string.h>
class Human
{
protected:
	std::string name;
public:
	virtual void Listen(std::string speech) = 0;
};

