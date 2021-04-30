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
};
