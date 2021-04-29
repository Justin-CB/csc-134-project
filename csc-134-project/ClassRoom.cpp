// csc-134-project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

class ClassRoom {
public:
    ClassRoom();
    int numOfStudents;
    //create the dynamic Array of STUDENT OBJECTS here (MAX SIZE IS 24)
    //represented as an array of pointers.

    //SYNTAX FOR CREATING A DYNAMIC ARRAY
    /*
        dataType *nameOfTheDynamicArray;
        nameOfTheDynamicArray = new dataType[numberOfElements];
        nameOfTheDynamicArray[0] = value;
        delete [] nameOfTheDynamicArray;
    */

    /*
        student classRoomDA;
        classRoomDA = new student[24];
        //CREATE THE FOR LOOP TO ASSIGN ALL STUDENT OBJECTS TO THE ARRAY

            for(int i=0; i<numOfStudents;i++){

            }

        delete [] classRoomDA

    */
    // ~ClassRoom();
};

//ClassRoom Object
void readFile(std::ifstream& inFile, int& cntr) {
    std::string str;
    std::string totString = "";
    std::string firstName, lastName, SSN;
    double eg1, eg2, eg3, eg4, avrgEG;


    inFile.open("students.txt");
    std::cout << std::endl;

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
int main()
{
    //Variables Used
    int counter = 0;
    std::ifstream studentsFile;

    //instant. of object
    ClassRoom CSC134;

    //asdfqsfwref

    readFile(studentsFile, counter);

    CSC134.numOfStudents = counter;
    std::cout << counter << std::endl;
    //Constructor will actually create the object type ClassRoom

   /* for (int i = 0; i < CSC134.numOfStudents; i++) {
        std::cout << "hello number : " << i << std::endl;
    }*/

}

ClassRoom::ClassRoom()
{
}
