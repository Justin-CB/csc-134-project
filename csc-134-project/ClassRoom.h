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
	
	ClassRoom(std::string objectName, int numOfStudents, Student*& arr);//array goes here );
	
	
	~ClassRoom();

	void readFile(std::ifstream& inFile, int& cntr, Student*& arr);

	void sortByAverage();
	// return array???
	

	void sortByLN();
	

	double overallAverage(Student*& arr, int studentsCntr);
	

	void displaySummary(Student*& arr, int counter);
	

	int studentsCreatedNum(Student*& arr);
	


};
