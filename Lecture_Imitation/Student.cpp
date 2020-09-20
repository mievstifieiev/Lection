#include "Student.h"

Student::Student(std::string name_)
{
	this->name = name_;
}

void Student::Listen(std::string speech)
{
	std::cout << "The student " << this->name << " heard: " << speech << std::endl;
	this->Write(speech);
}

void Student::Write(std::string heard)
{
	std::cout << "The student " << this->name << " wrote down: " << heard << std::endl;
}
