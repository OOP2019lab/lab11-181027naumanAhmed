#include<iostream>
#include<string>

#include "Person.h"

using namespace std;

#pragma once


Person :: Person(string fname, string lname , int age)
	: first_name(fname) , last_name(lname) , age(age)
{
		cout<<"Person() called\n";
}

Person :: ~Person()
{
	cout<<"~Person()\n";
}

//getters and setters
string Person :: getFirstName () const
{
	return first_name;
}

string Person :: getLastName () const
{
	return last_name;
}

int Person :: getAge () const
{
	return age;
}

void Person :: setFirstName(string fname)
{
		first_name = fname;
}

void Person :: setLastName(string lname)
{
		last_name = lname;
}

void Person :: setAge(int ageee)
{
		age = ageee;
}

//print

void Person :: printInformation()
{
	cout<< first_name << ' ' << last_name << " is " << age << " years old.\n";
}