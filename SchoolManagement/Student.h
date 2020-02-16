#pragma once
class Student
{
public:
	string name;
	string surname;
	vector<Mark> markVector;
	Student(string name, string surname);
	void addMark(Mark *mark);
	void print();
};

