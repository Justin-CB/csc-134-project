/* This is preliminary, will need to be changed based on the actual function names */
#include "ClassRoom.h"
int main()
{
	ClassRoom classroom;
	classroom.sortByAverage();
	classroom.displaySummary();
	classroom.sortByLN();
	classroom.displaySummary();
	printf("Overall average grade: %g%%\n", classroom.overallAverage());
	printf("%d students created.\n", classroom.studentsCreatedNum());
}
