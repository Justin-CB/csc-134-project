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
//    string firstName
//    string lastName
//    string SSN
//    double grades[4]
//    double avg
//    static int num
//
//    Student constructor
//    string getFirst
//    string getLast
//    string getSSN
//    double* getGrades
//    double getAvg
//    void setFirst
//    void setLast
//    void setSSN
//    void setGrades
//    void print
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
	//constructor to set all fields
	Student();
	Student(string firstName, string lastName, string SSN, double grades[4]);
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

