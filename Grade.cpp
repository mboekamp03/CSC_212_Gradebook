// Grade.cpp
#include "Grade.h"

//pushback the value given into the vector of Lab grades 
void Grade::getLabGrade(int gradeValue, std::string gradeName){ 
  //takes the grade value uses it to do labGrades.pushback(gradeValue)
  Assignment lab;
  lab.assignmentGrade = gradeValue;
  lab.assignmentName = gradeName;
  projectGrades.push_back(lab);
}

//pushback the value given into the vector of Assignment grades 
void Grade::getAssignmentGrade(int gradeValue, std::string gradeName){ 
  //takes the grade value uses it to do assignmentGrades.pushback(gradeValue) 
  Assignment assignment;
  assignment.assignmentGrade = gradeValue;
  assignment.assignmentName = gradeName;
  assignmentGrades.push_back(assignment);
  
}

//pushback the value given into the vector of project grades 
void Grade::getProjectGrade(int gradeValue, std::string gradeName) {
  //takes the grade value uses it to do projectGrades.pushback(gradeValue)
  Assignment project;
  project.assignmentGrade = gradeValue;
  project.assignmentName = gradeName;
  projectGrades.push_back(project);

}

//sets the value of private Final exam
void Grade::getFinalExamGrade(int gradeValue){ 
  //uses this keyword to set private value of finalExam to gradeValue
  this->examGrade = gradeValue;
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

//uses private totlab and totAssignment along with vector for project grades
double Grade::totGrade(){

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
    totalPoints += 100;
    totalPoints+= 350;



    //Calculates a final percentage grade using sum and totalPoints, couts the grade.
    float Total = (float)sum/totalPoints;
    Total= Total * 100;




    std::cout<<"Your Grade is "<< Total <<" %"<<std::endl;
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
    else if (gradeCategory == "Homework" || gradeCategory == "homework" ) {
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
    else {
       return 0;
    }
  return foundGrade;
}
