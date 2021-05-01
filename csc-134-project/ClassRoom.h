///////////////////////////////////////////////////////////////////////
//
// Filename: ClassRoom.h
// Date: April 30, 2021
// Programmer: Alan Monzon
//
// Description:
//    the header file for the ClassRoom class.
//
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
//
// Class: ClassRoom
//
// Description:
//    The class whose main purpose is to hold student objects
//		in a dynamic array. Additonally creates functions for that
//		  dyanmic array.
//
//    Data members:
//		string objectName
//		int numOfStudents
//		Array students
//
//    member functions:
//		ClassRoom();
//		ClassRoom(std::string objectName);
//		~ClassRoom
//		void readFile
//		void sortByAverage
//		void sortByLN
//		double overallAverage
//		void displaySummary
//		int studentsCreatedNum
//
///////////////////////////////////////////////////////////////////////

#pragma once
#include <iostream>
#include <string>
#include "student.h"

class ClassRoom {
/*private:*/
	std::string objectName;
	int numOfStudents;
	Student * students[24];
public:
	ClassRoom();
	ClassRoom(std::string objectName);
	~ClassRoom();
	void readFile();
	void sortByAverage();
	void sortByLN();
	double overallAverage();
	void displaySummary();
	int studentsCreatedNum();
	static bool LN_less(Student * a, Student * b);
	static bool avg_less(Student * a, Student * b);
};
