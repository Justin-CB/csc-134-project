// csc-134-project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include "ClassRoom.h"
#include "student.h"

ClassRoom::ClassRoom()
//default constructor.
{
    this->objectName = "CSC134";
    //include the num of students and the array size.
}
ClassRoom::ClassRoom(std::string objectName, int numOfStudents, Student*& arr) {
    this->objectName = objectName;
    this->numOfStudents = numOfStudents;
    //add DA here.
}


void ClassRoom::readFile(std::ifstream& inFile, int& cntr) {
    std::string str;
    std::string totString = "";
    std::string firstName, lastName, SSN;
    double eg1, eg2, eg3, eg4;// , avrgEG;


    inFile.open("Students.txt");


    while (inFile.good()) {
        while (inFile >> firstName >> lastName >> SSN >> eg1 >> eg2 >> eg3 >> eg4) {
            cntr++;
            std::cout << "Num: " << cntr << ' ' << firstName << " " << lastName << " " << SSN << " " << eg1 << " " << eg2 << " " << eg3 << " " << eg4 << std::endl;
            // student1.setFirstName(firstName);
             //Asign all fileds to their respective attributes in the student object. 



        }

    }
    //total of 16 students. Assign to the classroom object.
}
void ClassRoom::displaySummary() {
    std::cout << "First Name \t Last Name \t SSN \t Exam Grade 1 \t Exam Grade 2 \t Exam Grade 3 \t Exam Grade 4 \t average" << std::endl;


}

