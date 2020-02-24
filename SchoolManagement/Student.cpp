#include "Student.h"
#include "Mark.h"
#include <vector>
#include <iostream>
#include <string>

Student::Student(std::string name, std::string surname)
{
	this->name = name;
	this->surname = surname;
}
void Student::addMark(Mark* mark)
{
	markVector.push_back(*mark);
}
void Student::print()
{
	std::cout << name << ' ' << surname << std::endl;
	for (int i = 0; i < markVector.size(); i++)
	{
		markVector.at(i).print();
	}
}