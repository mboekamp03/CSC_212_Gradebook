#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "gradebook.h"

void menu();
void catMenu();


int main(int argc, char*argv[]) {
    Grade student;
    int choice = 1, ifChoice;
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
            student.setLabGrade(grade, name);
        }
        else if (category == "Assignment" || category == "assignment"){
            student.setAssignmentGrade(grade, name);
        }
        else if (category == "Project" || category == "project"){
            student.setProjectGrade(grade, name);
        }
        else{
            student.setFinalExamGrade(grade);
        }
    }
    while (choice != 0){
        menu();
        //get choice to proceed
        std::cin >> choice;

        if (choice == 1){
            catMenu();
            std::cin >> ifChoice;
            student.printCategory(ifChoice);
        }
        else if (choice == 2){
            std::cout << student.getFinalExamGrade() << '\n';
        }
        else if (choice == 3){
            std::cout << student.getTotGrade() << '\n';
        }

    }

    file.close();
    return 0;
}

void menu(){
    std::cout << "Choose a number to view categories or make changes!" << '\n';
    std::cout << "1: View Category" << '\n';
    std::cout << "2: View Final Exam" << '\n';
    std::cout << "3: View Total Grade" << '\n';
    std::cout << "4: Change a Grade" << '\n';
    std::cout << "5. View Individual Grade" << '\n';
    std::cout << "0: To Quit" << '\n';
}

void catMenu(){
    std::cout << "Choose a number to choose a category!" << '\n';
    std::cout << "1: LABS" << '\n';
    std::cout << "2: ASSIGNMENTS" << '\n';
    std::cout << "3: PROJECTS" << '\n';
}

