// Grade.cpp
#include "gradebook.h"
#include <fstream>

//pushback the value given into the vector of Lab grades
void Grade::setLabGrade(double gradeValue, double totalValue, std::string gradeName, std::string gradeCat){
    //takes the grade value uses it to do labGrades.pushback(gradeValue)
    Assignment lab;
    lab.assignmentGrade = gradeValue;
    lab.assignmentName = gradeName;
    lab.totalGrade = totalValue;
    lab.assignmentCategory = gradeCat;
    labGrades.push_back(lab);
}

//pushback the value given into the vector of Assignment grades
void Grade::setAssignmentGrade(double gradeValue, double totalValue, std::string gradeName, std::string gradeCat){
    //takes the grade value uses it to do assignmentGrades.pushback(gradeValue)
    Assignment assignment;
    assignment.assignmentGrade = gradeValue;
    assignment.assignmentName = gradeName;
    assignment.totalGrade = totalValue;
    assignment.assignmentCategory = gradeCat;
    assignmentGrades.push_back(assignment);

}

//pushback the value given into the vector of project grades
void Grade::setProjectGrade(double gradeValue, double totalValue, std::string gradeName, std::string gradeCat) {
    //takes the grade value uses it to do projectGrades.pushback(gradeValue)
    Assignment project;
    project.assignmentGrade = gradeValue;
    project.assignmentName = gradeName;
    project.totalGrade = totalValue;
    project.assignmentCategory = gradeCat;
    projectGrades.push_back(project);

}

void Grade::setExamGrade(double gradeValue, double totalValue, std::string gradeName, std::string gradeCat) {
    //takes the grade value uses it to do examGrades.pushback(gradeValue)
    Assignment exam;
    exam.assignmentGrade = gradeValue;
    exam.assignmentName = gradeName;
    exam.totalGrade = totalValue;
    exam.assignmentCategory = gradeCat;
    examGrades.push_back(exam);

}

std::string Grade::getStudentName(){
    return this->studentName;
}

double Grade::getTotLab(){
    return this->totLab;
}

double Grade::getTotAssignment(){
    return this->totAssignment;
}

double Grade::getTotProject(){
    return this->totProject;
}

double Grade::getTotExam(){
    return this->totExam;
}

//uses private vector to get total lab grades using vec.size()
void Grade::setTotLab(){
    //Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    double sum = 0;

    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    for(int i = 0; i < labGrades.size(); i++){
        int currentGrade = labGrades[i].assignmentGrade;
        sum = currentGrade + sum;
    }

    this->totLab = sum;
}

//uses private vector to get total Assignment grades using vec.size()
void Grade::setTotAssignment(){
    double sum = 0;

    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    for(int i = 0; i < assignmentGrades.size(); i++){
        sum = sum + assignmentGrades[i].assignmentGrade;
    }

    this->totAssignment = sum;
}

void Grade::setTotProject(){
    double sum = 0;

    for(int i = 0; i < projectGrades.size(); i++){
        sum = sum + projectGrades[i].assignmentGrade;
    }

    this->totProject = sum;
}

void Grade::setTotExam(){
    double sum = 0;

    for(int i = 0; i < examGrades.size(); i++){
        sum = sum + examGrades[i].assignmentGrade;
    }

    this->totExam = sum;
}

void Grade::setStudentName(std::string name){
    this->studentName = name;
}



//uses private totlab and totAssignment along with vector for project grades
void Grade::setTotGrade(){

    //Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    int sum = 0;
    int totalPoints = 0;


    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    for(int i = 0; i < assignmentGrades.size(); i++){
        sum = assignmentGrades[i].assignmentGrade + sum;
        totalPoints = totalPoints + assignmentGrades[i].totalGrade;
    }


    //Loops through labs vector, converts the percent to its point weight, and adds it to the sum, then adds total possible points to totalPoints.
    for(int i = 0; i < labGrades.size(); i++){
        //labGrades[i] = 5;
        sum = sum + labGrades[i].assignmentGrade;
        totalPoints = totalPoints + labGrades[i].totalGrade;

    }


    //Converts the project grade percent to its weight in points, adds it to the sum and total possible points to totalPoints
    for(int i = 0; i < projectGrades.size(); i++){
        //labGrades[i] = 5;
        sum = sum + projectGrades[i].assignmentGrade;
        totalPoints = totalPoints + projectGrades[i].totalGrade;
    }

    for(int i = 0; i < examGrades.size(); i++){
        //labGrades[i] = 5;
        sum = sum + examGrades[i].assignmentGrade;
        totalPoints = totalPoints + examGrades[i].totalGrade;
    }


    //std::cout<< sum << " _ " << totalPoints <<std::endl;
    //Adds full exam and full project values to total number of points


    //Calculates a final percentage grade using sum and totalPoints, couts the grade.
    float Total = (float)sum/totalPoints;
    Total= Total * 100;

    this->totGrade = Total;
    //std::cout<<"Your Grade is "<< Total <<" %"<<std::endl;
}

void Grade::setOverallGrade(){

    //Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    int sum = 0;
    int totalPoints = 1000;


    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    for(int i = 0; i < assignmentGrades.size(); i++){
        sum = assignmentGrades[i].assignmentGrade + sum;
    }


    //Loops through labs vector, converts the percent to its point weight, and adds it to the sum, then adds total possible points to totalPoints.
    for(int i = 0; i < labGrades.size(); i++){
        //labGrades[i] = 5;
        sum = sum + labGrades[i].assignmentGrade;
    }


    //Converts the project grade percent to its weight in points, adds it to the sum and total possible points to totalPoints
    for(int i = 0; i < projectGrades.size(); i++){
        //labGrades[i] = 5;
        sum = sum + projectGrades[i].assignmentGrade;
    }

    for(int i = 0; i < examGrades.size(); i++){
        //labGrades[i] = 5;
        sum = sum + examGrades[i].assignmentGrade;
    }

    //Calculates a final percentage grade using sum and totalPoints, couts the grade.
    float Total = (float)sum/totalPoints;
    Total= Total * 100;

    this->overallGrade = Total;
    //std::cout<<"Your Grade is "<< Total <<" %"<<std::endl;
}

double Grade::getTotGrade(){
    return this->totGrade;
}

double Grade::getOverallGrade(){
    return this->overallGrade;
}

double Grade::getIndividualGrade(std::string gradeCategory, std::string gradeName)  {
    bool found = false;
    int i = 0;
    double foundGrade = 0;

    if (gradeCategory == "Lab" || gradeCategory == "lab" ) {
        while (found == false && i < labGrades.size()) {
            if (labGrades[i].assignmentName == gradeName) {
                foundGrade = labGrades[i].assignmentGrade;
                found = true;
            }
            i++;
        }
    }
    else if (gradeCategory == "Assignment" || gradeCategory == "assignment" ) {
        while (found == false && i < assignmentGrades.size()) {
            if (assignmentGrades[i].assignmentName == gradeName) {
                foundGrade = assignmentGrades[i].assignmentGrade;
                found = true;
            }
            i++;
        }
    }
    else if (gradeCategory == "Project" || gradeCategory == "project" ) {
        while (found == false && i < projectGrades.size()) {
            if (projectGrades[i].assignmentName == gradeName) {
                foundGrade = projectGrades[i].assignmentGrade;
                found = true;
            }
            i++;
        }
    }
    else if (gradeCategory == "Exam" || gradeCategory == "exam" ) {
        while (found == false && i < examGrades.size()) {
            if (examGrades[i].assignmentName == gradeName) {
                foundGrade = examGrades[i].assignmentGrade;
                found = true;
            }
            i++;
        }
    }
    if (found == false) {
        return 0;
    }
    else {
        return foundGrade;
    }
}

void Grade::changeGrade(std::string gradeCategory, std::string gradeName, double newGrade)  {
    if (gradeCategory == "Lab" || gradeCategory == "lab" ) {
        for (int i = 0; i < labGrades.size(); i++) {
            if (labGrades[i].assignmentName == gradeName) {
                labGrades[i].assignmentGrade = newGrade;
            }
        }
    }
    else if (gradeCategory == "Assignment" || gradeCategory == "assignment" ) {
        for (int i = 0; i < assignmentGrades.size(); i++) {
            if (assignmentGrades[i].assignmentName == gradeName) {
                assignmentGrades[i].assignmentGrade = newGrade;
            }
        }
    }
    else if (gradeCategory == "Project" || gradeCategory == "project" ) {
        for (int i = 0; i < projectGrades.size(); i++) {
            if (projectGrades[i].assignmentName == gradeName) {
                projectGrades[i].assignmentGrade = newGrade;
            }
        }
    }
    else if (gradeCategory == "Exam" || gradeCategory == "exam" ) {
        for (int i = 0; i < examGrades.size(); i++) {
            if (examGrades[i].assignmentName == gradeName) {
                examGrades[i].assignmentGrade = newGrade;
            }
        }
    }
    else {
        examGrade = newGrade;
    }
}

void Grade::changetotalGrade(std::string gradeCategory, std::string gradeName, double newTotal)  {
    if (gradeCategory == "Lab" || gradeCategory == "lab" ) {
        for (int i = 0; i < labGrades.size(); i++) {
            if (labGrades[i].assignmentName == gradeName) {
                labGrades[i].totalGrade = newTotal;
            }
        }
    }
    else if (gradeCategory == "Assignment" || gradeCategory == "assignment" ) {
        for (int i = 0; i < assignmentGrades.size(); i++) {
            if (assignmentGrades[i].assignmentName == gradeName) {
                assignmentGrades[i].totalGrade = newTotal;
            }
        }
    }
    else if (gradeCategory == "Project" || gradeCategory == "project" ) {
        for (int i = 0; i < projectGrades.size(); i++) {
            if (projectGrades[i].assignmentName == gradeName) {
                projectGrades[i].totalGrade = newTotal;
            }
        }
    }
    else if (gradeCategory == "Exam" || gradeCategory == "exam" ) {
        for (int i = 0; i < examGrades.size(); i++) {
            if (examGrades[i].assignmentName == gradeName) {
                examGrades[i].assignmentGrade = newTotal;
            }
        }
    }
}

void Grade::printCategory(int ifChoice) {
    if(ifChoice == 1) {
        for(int i = 0; i < labGrades.size(); i++) {
            std::cout<< labGrades[i].assignmentName << " " << labGrades[i].assignmentGrade << std::endl;
            std::cout<< " " <<std::endl;
        }
    }
    else if(ifChoice == 2) {
        for(int i = 0; i < assignmentGrades.size(); i++) {
            std::cout<< assignmentGrades[i].assignmentName << " " << assignmentGrades[i].assignmentGrade << std::endl;
            std::cout<< " " <<std::endl;
        }
    }
    else if(ifChoice == 3) {
        for(int i = 0; i < projectGrades.size(); i++) {
            std::cout<< projectGrades[i].assignmentName << " " << projectGrades[i].assignmentGrade << std::endl;
            std::cout<< " " <<std::endl;
        }
    }
    else if(ifChoice == 4) {
        for(int i = 0; i < examGrades.size(); i++) {
            std::cout<< examGrades[i].assignmentName << " " << examGrades[i].assignmentGrade << std::endl;
            std::cout<< " " <<std::endl;
        }
    }
}

void Grade::outputFile(std::string fileName) {
    std::ofstream outputFile(fileName);

        // Write the student name
        outputFile << studentName << std::endl;

        // Write the lab grades
        for (int i = 0; i < labGrades.size(); i++) {
            outputFile << labGrades[i].assignmentCategory << " " << labGrades[i].assignmentName << " " << labGrades[i].assignmentGrade << " " << labGrades[i].totalGrade << std::endl;
        }

        // Write the assignment grades
        for (int i = 0; i < assignmentGrades.size(); i++) {
            outputFile << assignmentGrades[i].assignmentCategory << " " << assignmentGrades[i].assignmentName << " " << assignmentGrades[i].assignmentGrade << " " << assignmentGrades[i].totalGrade << std::endl;
        }


        // Write the project grades
        for (int i = 0; i < projectGrades.size(); i++) {
            outputFile << projectGrades[i].assignmentCategory << " " << projectGrades[i].assignmentName << " " << projectGrades[i].assignmentGrade << " " << projectGrades[i].totalGrade << std::endl;
        }

        // Write the final exam grade
        for (int i = 0; i < examGrades.size(); i++) {
            outputFile << examGrades[i].assignmentCategory << " " << examGrades[i].assignmentName << " " << examGrades[i].assignmentGrade << " " << examGrades[i].totalGrade << std::endl;
        }

        outputFile.close();
        std::cout << "Grades have been written to the file." << std::endl;
}
