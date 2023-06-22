#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "Grade.h"

int main(int argc, char*argv[]) {
    Grade student;
    std::string fileName = argv[1];
    std::ifstream file(fileName);
    std::string line;
    std::getline(file, line);
    student.setStudentName(line);


    std::string category;
    std::string name;
    double grade;

    while(std::getline(file, line)) {
        std::istringstream data(line);

        //spliting data into category, name, grade

        data >> category >> name >> grade;

        //testing to see what the category is so we can call the right function

        if (category == "Lab" || category == "lab"){
            student.getLabGrade(grade, name);
        }
        else if (category == "Assignment" || category == "assignment"){
            student.getAssignmentGrade(grade, name);
        }
        else if (category == "Project" || category == "project"){
            student.getProjectGrade(grade, name);
        }
        else{
            student.getFinalExamGrade(grade);
        }
    }

    return 0;
}
