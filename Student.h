#include<iostream>
#include<string>
#include "Person.h"
using namespace std;

#pragma once



class Student : public Person
{

private:
	float GPA;

public:
	Student();
	Student(string, string, float, int);
	~Student();

	float getGPA() const;
	void setGPA(float);
	void printStudent();
};