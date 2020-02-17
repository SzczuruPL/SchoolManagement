
#include <iostream>
#include <string>
#include "Student.h"
#include "Mark.h"

using namespace std;

int main()
{
	Student student("John","Doe");
	Mark mark(6,"math",&student);
}