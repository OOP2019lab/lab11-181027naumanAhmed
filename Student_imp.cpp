#include "Student.h"

Student :: Student (string fname,string lname,float cgpa,int age): Person(fname, lname, age)
{
	GPA = cgpa;
	cout<<"Student()\n";
}

Student :: ~Student()
{
	cout<<"~Student\n";
}

//getter and setter

float Student :: getGPA() const
{
	return GPA;
}

void Student :: setGPA(float gpa)
{
	GPA = gpa;
}

//print 

void Student::printStudent()
{
	printInformation();
	cout << "GPA of student is: " << getGPA() <<endl;

}

