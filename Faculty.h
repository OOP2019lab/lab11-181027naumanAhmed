#include<iostream>
#include<string>
#include "Person.h"
using namespace std;

#pragma once

class Faculty : public Person
{

private:
	int course_count;
	int tele_number;

public:
	Faculty();
	~Faculty();
	Faculty(string, string, int, int, int);

	int getCourseCount() const;
	void setCourseCount(int);
	int getTeleNumber() const;
	void setTeleNumber(int);
	void printFaculty();

};