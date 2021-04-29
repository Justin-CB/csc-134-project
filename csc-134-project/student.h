#pragma once
#include<iostream>
#include<string>
using namespace std;


//the student class in header file, with all the
//other fields
class Student
{
private:
	string firstName;
	string lastName;
	string SSN;
	double grades[4];
	double avg;


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
	void calAvg();

};
 