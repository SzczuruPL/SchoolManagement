#pragma once
#include "Mark.h"
#include <iostream>
#include <string>
#include <vector>
class Mark;
class Student
{
public:
	std::string name;
	std::string surname;
	std::vector<Mark> markVector;
	Student(std::string name, std::string surname);
	void addMark(Mark *mark, std::vector<Mark> markVector);
	void print();
};

