///////////////////////////////////////////////////////////////////////
//
// Filename: student.cpp
// Date: April 29, 2021
// Programmer: Ken Lacy
//
// Description:
//    Create the student objects from student.txt: attributes, first, last, SSN, grades, average exam and student number
//
//
///////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "student.h"
using namespace std;

int Student::num = 0;
///////////////////////////////////////////////////////////////////////
//
// Function: Student
//
// Description:
//    Parameterless constructor for the Student Class
//
// Parameters:
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
Student::Student()
{
	this->firstName = "";
	this->lastName = "";
	this->SSN = "";
	for (int i = 0; i < 4; ++i)
	{
		this->grades[i] = 0;
	}
	Student::num++;
}
///////////////////////////////////////////////////////////////////////
//
// Function: Student
//
// Description:
//    Parameterized constructor for the Student Class
//
// Parameters:
//    firstName : The student's first name
//    lastName : The student's last name
//    SSN : The student's Social Security Number
//    grades[4] : The student's test grades(array of length 4)
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
Student::Student(string firstName, string lastName, string SSN, double grades[4])
{

	this->firstName = firstName;
	this->lastName = lastName;
	this->SSN = SSN;
	for (int i = 0; i < 4; ++i)
	{
		this->grades[i] = grades[i];
	}
	Student::num++;
}
///////////////////////////////////////////////////////////////////////
//
// Function: getFirst
//
// Description:
//    Getter for the firstName variable
//
// Parameters:
//
// Returns:
//    firstName : The student's first name
//
///////////////////////////////////////////////////////////////////////
string Student::getFirst()
{
	return firstName;
}
///////////////////////////////////////////////////////////////////////
//
// Function: getLast
//
// Description:
//    Getter for the lastName variable
//
// Parameters:
//
// Returns:
//    lastName : The student's last name
//
///////////////////////////////////////////////////////////////////////
string Student::getLast()
{
	return lastName;
}
///////////////////////////////////////////////////////////////////////
//
// Function: getSSN
//
// Description:
//    Getter for the SSN variable
//
// Parameters:
//
// Returns:
//    SSN : The student's Social Security Number
//
///////////////////////////////////////////////////////////////////////
string Student::getSSN()
{
	return SSN;
}
///////////////////////////////////////////////////////////////////////
//
// Function: getGrades
//
// Description:
//    Getter for the grades variable
//
// Parameters:
//
// Returns:
//    grades : The array of the student's test grades
//
///////////////////////////////////////////////////////////////////////
double* Student::getGrades()
{
	return grades;
}
///////////////////////////////////////////////////////////////////////
//
// Function: getAvg
//
// Description:
//    Calculates the student's average test grades
//
// Parameters:
//
// Returns:
//    avg : The student's average test grades
//
///////////////////////////////////////////////////////////////////////
double Student::getAvg()
{
	double sum = 0;
	for (int i = 0; i < 4; ++i)
	{
		sum += grades[i];
	}
	return sum / 4;
}
///////////////////////////////////////////////////////////////////////
//
// Function: setFirst
//
// Description:
//    Setter for the firstName variable
//
// Parameters:
//    firstName  : The student's first name
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
void Student::setFirst(string arg)
{
	firstName = arg;
}
///////////////////////////////////////////////////////////////////////
//
// Function: setLast
//
// Description:
//    Setter for the lastName variable
//
// Parameters:
//    firstName  : The student's last name
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
void Student::setLast(string arg)
{
	lastName = arg;
}
///////////////////////////////////////////////////////////////////////
//
// Function: setSSN
//
// Description:
//    Setter for the SSN variable
//
// Parameters:
//    SSN  : The student's Social Security Number
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
void Student::setSSN(string arg)
{
	SSN = arg;
}
///////////////////////////////////////////////////////////////////////
//
// Function: setGrades
//
// Description:
//    Setter for the grades variable
//
// Parameters:
//    grades  : The array of the student's test grades
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
void Student::setGrades(double a[4])
{
	for (int i = 0; i < 4; ++i)
	{
		grades[i] = a[i];
	}
}
///////////////////////////////////////////////////////////////////////
//
// Function: print
//
// Description:
//    Prints the student's information
//
// Parameters:
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
void Student::print()
{
	cout << firstName << " " << lastName << " " << SSN;
	for (int i = 0; i < 4; ++i)
		cout << " " << grades[i];
	cout << endl;
}
///////////////////////////////////////////////////////////////////////
//
// Function: ~Student
//
// Description:
//    Destructor for the Student Class
//
// Parameters:
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
Student::~Student()
{
	Student::num--;
}
