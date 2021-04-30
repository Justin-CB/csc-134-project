/* This is preliminary, will need to be changed based on the actual function names */
#include "ClassRoom.h"
int main()
{
ClassRoom classroom = new ClassRoom("students.txt");
classroom.sort_by_average();
classroom.display_students();
classroom.sort_by_lastname();
classroom.display_students();
classroom.display_average_grades();
classroom.display_num_students();
}
