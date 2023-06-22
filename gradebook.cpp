// Grade.cpp
#include "gradebook.h"

//pushback the value given into the vector of Lab grades
void Grade::setLabGrade(int gradeValue, std::string gradeName){
    //takes the grade value uses it to do labGrades.pushback(gradeValue)
    Assignment lab;
    lab.assignmentGrade = gradeValue;
    lab.assignmentName = gradeName;
    projectGrades.push_back(lab);
}

//pushback the value given into the vector of Assignment grades
void Grade::setAssignmentGrade(int gradeValue, std::string gradeName){
    //takes the grade value uses it to do assignmentGrades.pushback(gradeValue)
    Assignment assignment;
    assignment.assignmentGrade = gradeValue;
    assignment.assignmentName = gradeName;
    assignmentGrades.push_back(assignment);

}

//pushback the value given into the vector of project grades
void Grade::setProjectGrade(int gradeValue, std::string gradeName) {
    //takes the grade value uses it to do projectGrades.pushback(gradeValue)
    Assignment project;
    project.assignmentGrade = gradeValue;
    project.assignmentName = gradeName;
    projectGrades.push_back(project);

}

//sets the value of private Final exam
void Grade::setFinalExamGrade(int gradeValue){
    //uses this keyword to set private value of finalExam to gradeValue
    this->examGrade = gradeValue;
}
double Grade::getFinalExamGrade(){
    return this->examGrade;
}
//uses private vector to get total lab grades using vec.size()
double Grade::setTotLab(){
    //Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    int sum = 0;
    int totLab = 0;


    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    for(int i = 0; i < labGrades.size(); i++){
        int currentGrade = labGrades[i].assignmentGrade;
        sum = currentGrade + sum;

    }

    totLab = sum;
    return totLab;
}

//uses private vector to get total Assignment grades using vec.size()
double Grade::setTotAssignment(){
    int sum = 0;
    int totAssignment = 0;


    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    for(int i = 0; i < assignmentGrades.size(); i++){
        sum = sum + assignmentGrades[i].assignmentGrade;
    }

    totAssignment = sum;
    return totAssignment;
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
    for(int i = 0; i<assignmentGrades.size(); i++){
        sum = assignmentGrades[i].assignmentGrade + sum;

    }
    totalPoints = assignmentGrades.size() * 50;


    //Loops through labs vector, converts the percent to its point weight, and adds it to the sum, then adds total possible points to totalPoints.
    for(int i = 1;i <= labGrades.size(); i++){
        //labGrades[i] = 5;
        sum = sum + labGrades[i].assignmentGrade;


    }
    totalPoints = totalPoints + labGrades.size() * 5;


    //Converts the project grade percent to its weight in points, adds it to the sum and total possible points to totalPoints
    for(int i = 1;i <= projectGrades.size(); i++){
        //labGrades[i] = 5;
        sum = sum + projectGrades[i].assignmentGrade;
    }

    sum = sum + examGrade;

    std::cout<< sum << " _ " << totalPoints <<std::endl;
    //Adds full exam and full project values to total number of points

    if (projectGrades.size() == 2) {
        totalPoints += 500;
    }
    else if (projectGrades.size() == 1) {
        totalPoints += 150;
    }



    //Calculates a final percentage grade using sum and totalPoints, couts the grade.
    float Total = (float)sum/totalPoints;
    Total= Total * 100;



    this->totGrade = Total;
    //std::cout<<"Your Grade is "<< Total <<" %"<<std::endl;
}

double Grade::getTotGrade(){
    return this->totGrade;
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
    else {
        examGrade = newGrade;
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
}