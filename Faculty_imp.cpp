#include "Faculty.h"

Faculty :: Faculty(string fname, string lname, int age, int cc, int tn) : Person(fname, lname, age)
{
	course_count = cc;
	tele_number = tn;
	cout<<"Faculty()\n";
}

Faculty :: ~Faculty()
{
	cout<<"~Faculty()\n";
}

//getter and setter

int Faculty :: getCourseCount() const
{
	return course_count;
}

void Faculty :: setCourseCount(int cc)
{
	course_count = cc;
}

int Faculty :: getTeleNumber() const
{
	return tele_number;
}

void Faculty :: setTeleNumber(int tn)
{
	tele_number = tn;
}

void Faculty :: printFaculty()
{
	printInformation();
	cout<<"Number of Courses is: " << getCourseCount() <<endl;
	cout<<"Extension is: " << getTeleNumber() <<endl;
}
