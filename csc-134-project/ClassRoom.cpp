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
ClassRoom::~ClassRoom()
{
    //delete the Dynamic Array in here.

}

void ClassRoom::readFile(std::ifstream& inFile, int& cntr, Student*& arr) {
    std::string firstName, lastName, SSN;
    double eg1, eg2, eg3, eg4;

    inFile.open("Students.txt");

    while (inFile.good()) {
        while (inFile >> firstName >> lastName >> SSN >> eg1 >> eg2 >> eg3 >> eg4) {
            cntr++;

            for (int j = 0; j < cntr; j++) {
                arr[j].setFirst(firstName);

                arr[j].setLast(lastName);
                arr[j].setSSN(SSN);
                double arrayGrades[4] = { eg1,eg2,eg3,eg4 };
                arr[j].setGrades(arrayGrades);
                arr[j].calAvg();


            }



        }

    }

}

std::string spaces(int num) {
    std::string spacesHolder, rtnSpaces = "";
    ///////////////////////////////////////////////////////////////////////
    //
    // Function: spaces                                        
    //                                                                   
    // Description:
    //    based on the number (1st parameter) it uses a for loop to place spaces.
    //		It's purpose is to avoid having to type out a bunch of spaces to 
    //			line up the model and 
    // Parameters:  
    //    firstParam  : an integer number that will dictate the number of spaces          
    //    secondParam : none             
    //                                                       
    // Returns:  
    //    returnVal : a certian number of spaces                 
    //                                            
    ///////////////////////////////////////////////////////////////////////

    for (int i = 0; i < num; i++) {
        spacesHolder = spacesHolder + " ";
    }
    rtnSpaces = spacesHolder;
    spacesHolder = "";
    //"\t" = 8 spaces
    return rtnSpaces;
}
int spaceDiff(int numHolder, std::string item) {
    ///////////////////////////////////////////////////////////////////////
    //
    // Function: spaceDiff                                          
    //                                                                   
    // Description:
    //    gets the length of the previous string and determines how many spaces are needed
    //     to be used with the spaces function.
    //
    // Parameters:  
    //    firstParam  : the number of spaces in the string "item"          
    //    secondParam : string that the spaces should go after    
    //                                                       
    // Returns:  
    //    returnVal : the number of spaces needed for the function spaces                 
    //                                            
    ///////////////////////////////////////////////////////////////////////

    std::string tempSpaceHoldler = "";
    int cntr = 0;
    for (int i = 0; i < (numHolder - item.length()); i++) {
        cntr++;
    }
    return cntr;
}
double ClassRoom::overallAverage(Student*& arr, int studentsCntr) {
    double totAverage = 0.0;
    for (int i = 0; i < studentsCntr; i++) {
        totAverage = totAverage + arr[i].getAvg();
    }
    totAverage = totAverage / studentsCntr;
    return totAverage;
}

void ClassRoom::displaySummary(Student*& arr, int cntr) {

    std::cout << "First Name \t Last Name \t SSN \t \t Exam 1 \t Exam 2 \t Exam 3 \t Exam 4 \t average" << std::endl;
    for (int k = 0; k < cntr; k++) {
        std::cout << arr[k].getFirst() << spaces(spaceDiff(17, arr[k].getFirst())) << arr[k].getLast() << spaces(spaceDiff(13, arr[k].getLast())) << arr[k].getSSN() << spaces(5) << arr[k].getGrades() << spaces(5) << arr[k].getAvg() << std::endl;
    }


}

int ClassRoom::studentsCreatedNum(Student*& arr)
{
    int size;
    size = _countof(arr);

    return size;
}

