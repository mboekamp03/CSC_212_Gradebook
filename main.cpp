#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "gradebook.h"

void menu();
void catMenu();


int main(int argc, char*argv[]) {
    Grade student;
    int choice = 1, ifChoice;
    bool changesMade = false;
    std::string fileName = argv[1];
    std::ifstream file(fileName);
    std::string line;
    std::getline(file, line);
    student.setStudentName(line);


    std::string category;
    std::string name;
    double grade, totalGrade;

    while(std::getline(file, line)) {
        std::istringstream data(line);

        //spliting data into category, name, grade

        data >> category >> name >> grade >> totalGrade;

        //testing to see what the category is so we can call the right function

        if (category == "Lab" || category == "lab"){
            student.setLabGrade(grade, totalGrade, name, category);
        }
        else if (category == "Assignment" || category == "assignment"){
            student.setAssignmentGrade(grade, totalGrade, name, category);
        }
        else if (category == "Project" || category == "project"){
            student.setProjectGrade(grade, totalGrade, name, category);
        }
        else{
            student.setExamGrade(grade, totalGrade, name, category);
        }
    }

    while (choice != 0){

        std::cout << student.getStudentName() << '\n';
        menu();
        //get choice to proceed
        std::cin >> choice;

        if (choice < 0 || choice > 7 ){
            std::cout << "NOT A VALID OPTION!!!!!" << '\n';
        }

        else if (choice == 1){
            catMenu();
            std::cin >> ifChoice;
            student.printCategory(ifChoice);

        }

        else if (choice == 2){
            std::cout <<"Total Grade: " <<  student.getTotGrade() << '\n';
        }
        else if (choice == 3){
            std::cout << "Overall Grade: " << student.getOverallGrade() << '\n';
        }
        else if (choice == 4){
            catMenu();
            std::cin >> ifChoice;
            if (ifChoice > 4 || ifChoice < 0){
                std::cout << "NOT A VALID OPTION!! CHOOSE AGAIN!! " << '\n';
                std::cin >> ifChoice;
            }

            if (ifChoice == 1) {
                std::cout << student.getTotLab() << '\n';
            }
            else if (ifChoice == 2) {
                std::cout << student.getTotAssignment() << '\n';
            }
            else if (ifChoice == 3) {
                std::cout << student.getTotProject() << '\n';
            }
            else if (ifChoice == 4) {
                std::cout << student.getTotExam() << '\n';
            }

        }
        else if (choice == 5){
            int newGrade;
            std::string gradeCat;
            std::string gradeName;

            std::cout << "Please input the name of the category! (example: lab/ assignment / project / exam ) ";
            std::cin >> gradeCat;
            std::cout << '\n' << "Input the Grade Name you would like to change. ";
            std::cin >> gradeName;
            std::cout << '\n' << "Input the New Grade. ";
            std::cin >> newGrade;
            std::cout << '\n';
            student.changeGrade(gradeCat, gradeName, newGrade);

            changesMade = true;
        }
        else if (choice == 6){
            std::string gradeCat;
            std::string gradeName;
            std::cout << "Please input the name of the category! (example: lab/ assignment / project) ";
            std::cin >> gradeCat;
            std::cout << '\n' << "Input the Grade Name you would like to see. ";
            std::cin >> gradeName;
            std::cout << student.getIndividualGrade(gradeCat, gradeName) << '\n';
        }

        else if (choice == 7){
            int newGrade;
            std::string gradeCat;
            std::string gradeName;

            std::cout << "Please input the name of the category! (example: lab/ assignment / project / exam ) ";
            std::cin >> gradeCat;
            std::cout << '\n' << "Input the Grade Name you would like to change. ";
            std::cin >> gradeName;
            std::cout << '\n' << "Input the New Grade. ";
            std::cin >> newGrade;
            std::cout << '\n';

            student.changetotalGrade(gradeCat, gradeName, newGrade);

            changesMade = true;
        }

    }

    std::cout << "Program End!" << std::endl;

    if(changesMade == true) {
        std::ofstream file(fileName, std::ofstream::out | std::ofstream::trunc);
        student.outputFile(fileName);
    }

    file.close();
    return 0;
}

void menu(){
    std::cout << "Choose a number to view categories or make changes!" << '\n';
    std::cout << "1: View Category" << '\n';
    std::cout << "2: View Total Grade" << '\n';
    std::cout << "3: View Overall Grade" << '\n';
    std::cout << "4: View Total Category Grade" << '\n';
    std::cout << "5: Change a Grade" << '\n';
    std::cout << "6: View Individual Grade" << '\n';
    std::cout << "7: Change the Total Grade" << '\n';
    std::cout << "0: To Quit" << '\n';
}

void catMenu(){
    std::cout << "Choose a number to choose a category!" << '\n';
    std::cout << "1: LABS" << '\n';
    std::cout << "2: ASSIGNMENTS" << '\n';
    std::cout << "3: PROJECTS" << '\n';
    std::cout << "4: EXAMS" << '\n';
}
