// Grade.cpp
#include "Grade.h"

//pushback the value given into the vector of Lab grades 
int Grade::getLabGrade(int gradeValue){ 
  //takes the grade value uses it to do labGrades.pushback(gradeValue)
}

//pushback the value given into the vector of Assignment grades 
int Grade::getAssignmentGrade(int gradeValue){ 
  //takes the grade value uses it to do assignmentGrades.pushback(gradeValue) 
}

//pushback the value given into the vector of project grades 
int Grade::getProjectGrade(int gradeValue) {
  //takes the grade value uses it to do projectGrades.pushback(gradeValue)
	projectGrades.push_back(gradeValue);

	Assignment project;
  project.assignmentGrade = gradeValue;
  project.assignmentName = gradeName;
  projectGrades.push_back(project);
	
 }

//sets the value of private Final exam
int Grade::getFinalExamGrade(int gradeValue){ 
  //uses this keyword to set private value of finalExam to gradeValue
	this->examGrade = gradeValue;
	
 }

//uses private vector to get total lab grades using vec.size()
double Grade::setTotLab(){

  //make a temp value
  //use a for loop to go to the size of labGrades.size()
    //add to temp value

  //end for loop

  //set totlab to temp

    //Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    int sum =0;
    int totLab=0;


    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    for(int i=0;i<labGrades.size();i++){
        sum = labGrades[i]+sum;

    }

    totLab = sum;
    return totLab;
}

//uses private vector to get total Assignment grades using vec.size()
double Grade::setTotAssignment(){
  //make a temp value use a for loop to go to the size of labGrades.size() add to temp value

  //end for loop

  //set totAssignment to temp


    //Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    int sum =0;
    int totAssignment=0;


    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    for(int i=0;i<assignmentGrades.size();i++){
        sum = assignmentGrades[i]+sum;

    }

    totAssignment = sum;
    return totAssignment;


}

//uses private totlab and totAssignment along with vector for project grades
double Grade::totGrade(){

    //Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    int sum =0;
    int totalPoints=0;


    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
     for(int i=0;i<assignmentGrades.size();i++){
         sum = assignmentGrades[i]+sum;

    }
    totalPoints = assignmentGrades.size()*100;


    //Loops through labs vector, converts the percent to its point weight, and adds it to the sum, then adds total possible points to totalPoints.
    for(int i=1;i<=labGrades.size();i++){
        labGrades[i]= 5;
         sum += labGrades[i];


    }
    totalPoints = labGrades.size()*5+totalPoints;


    //Converts the project grade percent to its weight in points, adds it to the sum and total possible points to totalPoints
    projectGrades = (projectGrades/100)*350;

    sum +=projectGrades;


    sum +=examgrade;
    std::cout<<sum<<" _ " <<totalPoints<<std::endl;
//Adds full exam and full project values to total number of points
    totalPoints += 100;

    totalPoints+= 350;



    //Calculates a final percentage grade using sum and totalPoints, couts the grade.
    float Total = (float)sum/totalPoints;
    Total= Total *100;




    std::cout<<"Your Grade is "<<Total<<"%"<<std::endl;



}
