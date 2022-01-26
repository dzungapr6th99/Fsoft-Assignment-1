#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	string name;
	int age;
	double gpa;
public:
	Student()
	{

	}
	Student(string name, int age, double gpa)
	{
		this->name = name;
		this->age = age;
		this->gpa = gpa;
	}
	~Student(){}
	void display()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gpa:" << gpa << endl;
	}
};

