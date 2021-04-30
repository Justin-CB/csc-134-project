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
#include<fstream>
#include "student.h"
#include"ClassRoom.h"
using namespace std;


void readTheFuckingFile(std::ifstream& inFile, int& cntr) {
    std::string str;
    std::string totString = "";
    std::string firstName, lastName, SSN;
    double eg1, eg2, eg3, eg4;// , avrgEG;


    inFile.open("Students.txt");

    while (inFile.is_open()) {
        std::cout << "FUCK U ALAN" << std::endl;
    }
    while (inFile.good()) {
        std::cout << "FUCKKK 2.0" << std::endl;
        while (inFile >> firstName >> lastName >> SSN >> eg1 >> eg2 >> eg3 >> eg4) {
            cntr++;
            std::cout << "Num: " << cntr << ' ' << firstName << " " << lastName << " " << SSN << " " << eg1 << " " << eg2 << " " << eg3 << " " << eg4 << std::endl;
            // student1.setFirstName(firstName);
             //Asign all fileds to their respective attributes in the student object. 



        }

    }
}
int main()
{

    //Variables Used
    int counter = 0;
    std::ifstream studentsFile;
    std::ifstream FuckuAlan;
    //instant. of object
    ClassRoom CSC134;
    
    //asdfqsfwref
    
    FuckuAlan.open("Students.txt");
    while (FuckuAlan.is_open()) {
        std::cout << "FUCK U ALAN IS FUCKING OPEN U PIECE OF SHIT" << std::endl;
    }



    //CSC134.readFile(studentsFile, counter);
    readTheFuckingFile(FuckuAlan, counter);
    std::cout << counter << std::endl;
    //Constructor will actually create the object type ClassRoom

   /* for (int i = 0; i < CSC134.numOfStudents; i++) {
        std::cout << "hello number : " << i << std::endl;
    }*/

}