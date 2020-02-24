#include "Mark.h"
#include "Student.h"
#include <string>
#include <iostream>

Mark::Mark(int value, std::string subject, Student* student)
{
	this->value = value;
	this->subject = subject;
	this->student = student;
	student->addMark(this);
}
void Mark::print()
{
	std::cout << value << ' ' << subject << std::endl;
}