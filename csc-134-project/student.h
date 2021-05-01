///////////////////////////////////////////////////////////////////////
//
// Filename: student.h
// Date: April 29, 2021
// Programmer: Ken Lacy
//
// Description:
//    Student attribute names and Constructors
//
//
///////////////////////////////////////////////////////////////////////

#pragma once
#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////
//
// Class: Student
//
// Description:
//    Hold information about a student
//
// Variables:
//
//    string firstName : The student's first name
//    string lastName : The student's last name
//    string SSN : The student's Social Security Number
//    double grades[4] : The student's test grades
//    static int num : The number of students created
//
// Methods:
//
//    Student :  constructor
//    string getFirst : getter for firstName
//    string getLast : getter for lastName
//    string getSSN : getter for SSN
//    double* getGrades : getter for grades
//    double getAvg : calculates the student's average test grade
//    void setFirst : setter for firstName
//    void setLast : setter for lastName
//    void setSSN : setter for SSN
//    void setGrades : setter for grades
//    void print : print the information about the student
//
///////////////////////////////////////////////////////////////////////
class Student
{
private:
	string firstName;
	string lastName;
	string SSN;
	double grades[4];
public:
	static int num;
	Student();
	Student(string firstName, string lastName, string SSN, double grades[4]);
	/* ^ constructor to set all fields */
	string getFirst();
	string getLast();
	string getSSN();
	double* getGrades();
	double getAvg();
	void setFirst(string arg);
	void setLast(string arg);
	void setSSN(string arg);
	void setGrades(double a[4]);
	void print();
	~Student();
};

