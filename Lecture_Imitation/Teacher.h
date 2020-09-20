#pragma once
#include "Human.h"
#include "Room.h"
class Teacher :
    public Human
{
public:
    Teacher(std::string name_);
    void Listen(std::string speech);
    void Speak(Room* auditorium);
};

