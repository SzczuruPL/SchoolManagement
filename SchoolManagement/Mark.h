#pragma once
#include "Student.h"
//#include <iostream>
#include <string>
class Student;
class Mark
{
public:
	int value;
	std::string subject;
	Student *student;
	Mark(int value, std::string subject, Student *student);
	void print(int value);
};
