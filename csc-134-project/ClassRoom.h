#pragma once
#include <iostream>
#include <string>
#include "student.h"

class ClassRoom {
	std::string objectName;
	int numOfStudents;
	//dynamic array goes here.

public:
	ClassRoom();
	//do I need a default constructor????
	ClassRoom(std::string objectName, int numOfStudents, Student*& arr);//array goes here );
	//constructor fucntions.

	//Destructor function goes here???

	void readFile(std::ifstream& inFile, int& cntr);

	void sortByAverage();
	// void?? probably return an array?
	// pass by reference?
	// dynamic array as parameter.

	void sortByLN();
	//same things as sortByAverage.

	double overallAverage();
	//return the average of all students
	// dynamic array as a parameter.

	void displaySummary();
	//paramter = dynamic array.

	int studentsCreatedNum();
	//return the number of students created DA as parameter.


};
