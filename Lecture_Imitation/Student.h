#pragma once
#include "Human.h"
class Student :
    public Human
{
private:
public:
    Student(std::string name_);
    void Listen(std::string speech);
    void Write(std::string heard);
};

