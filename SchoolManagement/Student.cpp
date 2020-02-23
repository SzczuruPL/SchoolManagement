#include "Student.h"
#include "Mark.h"
#include <vector>
#include <iostream>
#include <string>

Student::Student(std::string name, std::string surname)
{
	//konstruktor 2 argumentowy, tworz¹cy obiekt typu Student (o co tu biega?)
}
void Student::addMark(Mark* mark, std::vector<Mark> markVectormarkVector)
{
	markVector.push_back(*mark);
}
void Student::print()
{
	std::cout << name << surname << std::endl;
	for (int i = 0; i < markVector.size(); i++)
	{
		std::cout << markVector(i) << std::endl;
	}
}