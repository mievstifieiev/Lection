#include "Teacher.h"

Teacher::Teacher(std::string name_)
{
	this->name = name_;
}

void Teacher::Listen(std::string speech)
{
}

void Teacher::Speak(Room* auditorium)
{
	std::string speech;
	std::cout << "The teacher says: ";
	std::cin >> speech;
	std::cout << std::endl;
	auditorium->Sound_Propagation(speech);
	
}
