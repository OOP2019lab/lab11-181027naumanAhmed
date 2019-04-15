#include "Person.h"
#include "Student.h"
#include "Faculty.h"


int main()
{
	Student s("Ted" , "Thompson", 3.91 , 22);
	Faculty f("Richard", "Karp" , 45 , 2, 420);

	/*

	Output For Exercise 5:
	Person() called
	Student()
	Person() called
	Faculty()
	~Faculty()
	~Person()
	~Student
	~Person()

	*/


	s.printStudent();
	f.printFaculty();

}