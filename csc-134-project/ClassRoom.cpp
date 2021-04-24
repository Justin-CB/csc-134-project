// csc-134-project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

//ClassRoom Object
void readFile(std::ifstream& inFile) {
    std::string str;
    std::string totString = "";
    std::string firstName, lastName, SSN;
    double eg1, eg2, eg3, eg4, avrgEG;
    int counter = 0;

    inFile.open("students.txt");
    std::cout << std::endl;

    while (inFile.good()) {
        while (inFile >> firstName >> lastName >> SSN >> eg1 >> eg2 >> eg3 >> eg4) {
            std::cout << "First Name : " << firstName<<std::endl;
            std::cout << "last Name : " << lastName << std::endl;
        }
    }
}
int main()
{
    std::fstream studentsFile;
    studentsFile.open("students.txt", std::ios::in);
    readFile(studentsFile);
    //Constructor will actually create the object type ClassRoom
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
