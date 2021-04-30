#include <iostream>
#include <string>
#include "student.h"

class ClassRoom {
/*private:*/
	std::string objectName;
	int numOfStudents;
	Student * students;
public:
	ClassRoom();
	ClassRoom(std::string objectName);
	~ClassRoom();
	void readFile(std::ifstream& inFile, int& cntr, Student*& arr);
	void sortByAverage();
	void sortByLN();
	double overallAverage(Student*& arr, int studentsCntr);
	void displaySummary(Student*& arr, int counter);
	int studentsCreatedNum(Student*& arr);
};
