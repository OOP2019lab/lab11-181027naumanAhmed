#include<iostream>
#include<string>
using namespace std;

#pragma once

class Person
{
private:
		string first_name;
		string last_name;
protected:
	int age;
public:
	Person();
	Person(string,string,int);
	~Person();
	string getFirstName () const;
	string getLastName () const;
	int getAge () const;
	void setFirstName (string);
	void setLastName (string);
	void setAge (int);

	void printInformation();

};


