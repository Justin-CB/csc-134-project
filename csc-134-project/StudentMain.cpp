///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: StudentMain.cpp
// Date: April 21, 2021
// Programmer: Justin Bester
//
// Description:
//    Main file for the CSC-134 final project(student registration)
//                                                                  
///////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main()
{
	/* This is preliminary, will need to be changed based on the actual function names */
	ClassRoom classroom = new ClassRoom("students.txt");
	classroom.sort_by_average();
	classroom.display_students();
	classroom.sort_by_lastname();
	classroom.display_students();
	classroom.display_average_grades();
	classroom.display_num_students();
}
