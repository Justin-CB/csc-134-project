///////////////////////////////////////////////////////////////////////
//
// Filename: ClassRoom.cpp
// Date: April 30, 2021
// Programmer: Alan Monzon
//
// Description:
//    This is the cpp file for the ClassRoom class, its purpose is to
//    create/define the functions listed int eh ClassRoom.h file.
//
///////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <fstream>
#include "ClassRoom.h"
#include "student.h"
#include <algorithm>
///////////////////////////////////////////////////////////////////////
//
// Constructor: ClassRoom()
//
// Description:
//    Basic consturctor for a parameterless ClassRoom
//    starts off with objectName as "CSC134" and a
//    numOfStudents with a value of 0.
//
// Parameters:
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
ClassRoom::ClassRoom()
//default constructor.
{
	this->objectName = "CSC134";
	this->numOfStudents = 0; /* You start with 0 students */
}
///////////////////////////////////////////////////////////////////////
//
// Constructor: ClassRoom(std::string objectName)
//
// Description:
//    Same as the parameterless constructor but you can
//    change the object name.
//
// Parameters:
//    firstParam  : (String) assigns a name to the ClassRoom object
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
ClassRoom::ClassRoom(std::string objectName)
{
	this->objectName = objectName;
	this->numOfStudents = 0; /* You start with 0 students */
}
///////////////////////////////////////////////////////////////////////
//
// Destructor: ~ClassRoom
//
// Description:
//    Destructor function for the ClassRoom class.
//    Destorys the dynamic array.
//
// Parameters:
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
ClassRoom::~ClassRoom()
{
	int i;
	for (i = 0; i < numOfStudents; i++)
	{
		delete students[i];
	}
}
///////////////////////////////////////////////////////////////////////
//
// Function: readFile
//
// Description:
//    Opens the "Students.txt" file and creates student objects with
//    the needed attributes to populate the students dynamic array.
//
// Parameters:
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
void ClassRoom::readFile()
{
	ifstream inFile;
	std::string firstName, lastName, SSN;
	double grades[4];
	inFile.open("Students.txt");
	while ((inFile >> firstName >> lastName >> SSN >> grades[0] >> grades[1] >> grades[2] >> grades[3]) && numOfStudents < 24)
	{
		students[numOfStudents] = new Student(firstName, lastName, SSN, grades);
		numOfStudents++;
	}
}
///////////////////////////////////////////////////////////////////////
//
// Function: sortByAverage();
//
// Description:
//    Sorts the students dynamic array in ascending order based off of
//    the exam average calculated.
//
// Parameters:
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
void ClassRoom::sortByAverage()
{
	std::sort(students, students + numOfStudents, avg_less);
}
///////////////////////////////////////////////////////////////////////
//
// Function: avg_less
//
// Description:
//    Comparator for the sort in sortByAverage
//
// Parameters:
//    a  : first student to compare
//    b  : second student to compare
//
// Returns:
//    bool : whether a's average is less than b's
//
///////////////////////////////////////////////////////////////////////
bool ClassRoom::avg_less(Student * a, Student * b)
{
	return a->getAvg() < b->getAvg();
}
///////////////////////////////////////////////////////////////////////
//
// Function: sortByLN();
//
// Description:
//    Sorts the students dynamic array in ascending order based off of
//    their last name
//
// Parameters:
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
void ClassRoom::sortByLN()
{
	std::sort(students, students + numOfStudents, LN_less);
}
///////////////////////////////////////////////////////////////////////
//
// Function: LN_less
//
// Description:
//    Comparator for the sort in sortByLN
//
// Parameters:
//    a  : first student to compare
//    b  : second student to compare
//
// Returns:
//    bool : whether a's last name comes before b's in the alphabet
//
///////////////////////////////////////////////////////////////////////
bool ClassRoom::LN_less(Student * a, Student * b)
{
	return (a->getLast().compare(b->getLast())) < 0;
}
///////////////////////////////////////////////////////////////////////
//
// Function: spaces
//
// Description:
//    Based on the number (1st parameter) it uses a for loop to place spaces.
//    It's purpose is to avoid having to type out a bunch of spaces to
//    line up the model.
// Parameters:
//    num  : an integer number that will dictate the number of spaces
//
// Returns:
//    string : A string containing num spaces
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
//    Uses a ternary operater to help calculated the correct number of spaces
//    needed based off of the lenght of the string it needs to align with.
//
// Parameters:
//    numHolder  : the number of spaces in the string "item"
//    item : string that the spaces should go after
//
// Returns:
//    returnVal : the number of spaces needed for the function spaces
//
///////////////////////////////////////////////////////////////////////
int spaceDiff(int numHolder, std::string item)
{
	/* ternary operator (condition) ? (return if true) : (return if false) *
	 * They don't need to be in parentheses, but it's easier to understand */
	return (item.length() < numHolder) ? (numHolder - item.length()) : (0);
}
///////////////////////////////////////////////////////////////////////
//
// Function: overallAverage
//
// Description:
//    Calculates the average exam grade for all students and all exams.
//    It averages the average exam grade for each individual student.
//
// Parameters:
//
// Returns:
//    (double) totAverage which holds the average of all exams grades.
//
///////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////////////////////
//
// Function: displaySummary
//
// Description:
//    Displays every student and all of their respective attributes.
//    Also displays every student's respective exam average.
//
// Parameters:
//
// Returns:
//
///////////////////////////////////////////////////////////////////////
void ClassRoom::displaySummary()
{
	std::cout << "First Name \t Last Name \t SSN \t \t Exam 1 \t Exam 2 \t Exam 3 \t Exam 4 \t average" << std::endl;
	for (int k = 0; k < numOfStudents; k++)
	{
		std::cout << students[k]->getFirst();
		std::cout << spaces(spaceDiff(17, students[k]->getFirst()));
		std::cout << students[k]->getLast();
		std::cout << spaces(spaceDiff(13, students[k]->getLast()));
		std::cout << students[k]->getSSN();
		std::cout << spaces(8);
		for (int i = 0; i < 4; i++)
		{
			std::cout << students[k]->getGrades()[i];
			std::cout << spaces((students[k]->getGrades()[i] == 100) ? 13 : 14);
		}
		std::cout << students[k]->getAvg() << '\n';
	}
}
///////////////////////////////////////////////////////////////////////
//
// Function: studentsCreatedNum
//
// Description:
//    Returns the total number of students created.
//    Basically it will serve as the length of the array.
//
// Parameters:
//
// Returns:
//    (int) total number of student objects inside of the
//          students dynamic array.
//
///////////////////////////////////////////////////////////////////////
int ClassRoom::studentsCreatedNum()
{
	return numOfStudents;
}
