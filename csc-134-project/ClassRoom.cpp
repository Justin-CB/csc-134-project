#include <iostream>
#include <string>
#include <fstream>
#include "ClassRoom.h"
#include "student.h"


ClassRoom::ClassRoom()
//default constructor.
{
	this->objectName = "CSC134";
	this->numOfStudents = 0; /* You start with 0 students */
}
ClassRoom::ClassRoom(std::string objectName)
{
	this->objectName = objectName;
	this->numOfStudents = 0; /* You start with 0 students */
}
ClassRoom::~ClassRoom()
{
	int i;
	for (i = 0; i < numOfStudents; i++)
	{
		delete students[i];
	}
}

void ClassRoom::readFile()
{
	ifstream inFile;
	std::string firstName, lastName, SSN;
	double grades[4];
	inFile.open("Students.txt");
	while (inFile >> firstName >> lastName >> SSN >> grades[0] >> grades[1] >> grades[2] >> grades[3] && numOfStudents < 24)
	{
		students[numOfStudents] = new Student(firstName, lastName, SSN, grades);
		numOfStudents++;
	}
}
///////////////////////////////////////////////////////////////////////
//
// Function: spaces
//
// Description:
//	Based on the number (1st parameter) it uses a for loop to place spaces.
//	It's purpose is to avoid having to type out a bunch of spaces to
//	line up the model.
// Parameters:
//	num  : an integer number that will dictate the number of spaces
//
// Returns:
//	string : A string containing num spaces
//
///////////////////////////////////////////////////////////////////////
std::string spaces(int num)
{
	std::string spaces = "";

	for (int i = 0; i < num; i++)
	{
		spaces += " ";
	}
	//"\t" = 8 spaces
	return spaces;
}
///////////////////////////////////////////////////////////////////////
//
// Function: spaceDiff
//
// Description:
//	gets the length of the previous string and determines how many spaces are needed
//	 to be used with the spaces function.
//
// Parameters:
//	numHolder  : the number of spaces in the string "item"
//	item : string that the spaces should go after
//
// Returns:
//	returnVal : the number of spaces needed for the function spaces
//
///////////////////////////////////////////////////////////////////////
int spaceDiff(int numHolder, std::string item)
{
	/* ternary operator (condition) ? (return if true) : (return if false) *
	 * They don't need to be in parentheses, but it's easier to understand */
	return (item.length() < numHolder) ? (numHolder - item.length()) : (0);
}
double ClassRoom::overallAverage()
{
	double totAverage = 0.0;
	for (int i = 0; i < numOfStudents; i++)
	{
		totAverage = totAverage + students[i]->getAvg();
	}
	totAverage = totAverage / numOfStudents;
	return totAverage;
}

void ClassRoom::displaySummary()
{

	std::cout << "First Name \t Last Name \t SSN \t \t Exam 1 \t Exam 2 \t Exam 3 \t Exam 4 \t average" << std::endl;
	for (int k = 0; k < numOfStudents; k++)
	{
		std::cout << students[k]->getFirst() << spaces(spaceDiff(17, students[k]->getFirst())) << students[k]->getLast() << spaces(spaceDiff(13, students[k]->getLast())) << students[k]->getSSN() << spaces(5) << students[k]->getGrades() << spaces(5) << students[k]->getAvg() << std::endl;
	}


}

int ClassRoom::studentsCreatedNum()
{
	return numOfStudents;
}

