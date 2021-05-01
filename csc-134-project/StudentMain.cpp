///////////////////////////////////////////////////////////////////////
//
// Filename: StudentMain.cpp
// Date: April 31, 2021
// Programmer: Justin Bester
//
// Description:
//    Main function for the student processing project
//
///////////////////////////////////////////////////////////////////////
#include "ClassRoom.h"
#include <cstdio>
int main()
{
	ClassRoom classroom;
	classroom.readFile();
	classroom.sortByAverage();
	classroom.displaySummary();
	puts("");
	classroom.sortByLN();
	classroom.displaySummary();
	printf("\nOverall average grade: %g%%\n", classroom.overallAverage());
	printf("%d students created.\n", classroom.studentsCreatedNum());
}
