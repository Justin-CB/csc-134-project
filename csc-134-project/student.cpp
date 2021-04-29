///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: student.cpp
// Date: April 29, 2021
// Programmer: Ken Lacy             
//
// Description:
//    Create the student objects from student.txt: attributes, first, last, SSN, grades, average exam and student numnber  
//    
//                                                                  ///////////////////////////////////////////////////////////////////////




#include<iostream>
#include<string>
#include"student.h"
using namespace std;

int Student::num = 0;
Student::Student()
{
	this->firstName = "";
	this->lastName = "";
	this->SSN = "";
	for (int i = 0; i < 4; ++i)
	{
		this->grades[i] = 0;
	}

}
//parameterized constructor
Student::Student(string firstName, string lastName, string SSN, double grades[4])
{

	this->firstName = firstName;
	this->lastName = lastName;
	this->SSN = SSN;
	for (int i = 0; i < 4; ++i)
	{
		this->grades[i] = grades[i];
	}

}
string Student::getFirst()
{
	return firstName;
}
string Student::getLast()
{
	return lastName;
}
string Student::getSSN()
{
	return SSN;
}
double* Student::getGrades()
{
	return grades;
}

double Student::getAvg()
{
	return avg;
}
void Student::setFirst(string arg)
{
	firstName = arg;
}
void Student::setLast(string arg)
{
	lastName = arg;
}
void Student::setSSN(string arg)
{
	SSN = arg;
}
void Student::setGrades(double a[4])
{
	for (int i = 0; i < 4; ++i)
	{
		grades[i] = a[i];
	}
}

//to calulate the average of student
void Student::calAvg()
{
	double sum = 0;
	for (int i = 0; i < 4; ++i)
	{
		sum += grades[i];
	}
	avg = sum / 4;
}

void Student::print()
{
	cout << firstName << " " << lastName << " " << SSN;
	for (int i = 0; i < 4; ++i)
		cout << " " << grades[i];
	cout << endl;
}