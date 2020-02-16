#pragma once

class Mark
{
public:
	int value;
	string subject;
	Student* student;
	Mark(int value, string subject, Student* student);
	void print(int value);
};
