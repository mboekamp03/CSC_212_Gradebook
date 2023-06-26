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

// Getters
std::string Grade::getStudentName(){
    return this->studentName;
}

double Grade::getTotLab(){
    setTotLab();
    return this->totLab;
}

double Grade::getTotAssignment(){
    setTotAssignment();
    return this->totAssignment;
}

double Grade::getTotProject(){
    setTotProject();
    return this->totProject;
}

double Grade::getTotExam(){
    setTotExam();
    return this->totExam;
}

//uses private vector to get total lab grades using vec.size()
void Grade::setTotLab(){
    //Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    double sum = 0;
    double totalGrade = 0;

    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    for(int i = 0; i < labGrades.size(); i++){
        sum = labGrades[i].assignmentGrade + sum;
        totalGrade = totalGrade + labGrades[i].totalGrade;
    }

    if(totalGrade != 0) {
        double grade = (sum / totalGrade) * 100;
        // Sets the total exam grade
        this->totLab = grade;
    }
    else {
        this->totLab = 0;
    }
}

//uses private vector to get total Assignment grades using vec.size()
void Grade::setTotAssignment(){
    double sum = 0;
    double totalGrade = 0;

    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    for(int i = 0; i < assignmentGrades.size(); i++){
        sum = sum + assignmentGrades[i].assignmentGrade;
        totalGrade = totalGrade + assignmentGrades[i].totalGrade;
    }

    if(totalGrade != 0) {
        double grade = (sum / totalGrade) * 100;
        // Sets the total exam grade
        this->totAssignment = grade;
    }
    else {
        this->totAssignment = 0;
    }
}

void Grade::setTotProject(){
    // Calculates individual category grade for exams
    // Intializes variables to 0
    // Loops through the for loop to add to each variable
    double sum = 0;
    double totalGrade = 0;

    for(int i = 0; i < projectGrades.size(); i++){
        sum = sum + projectGrades[i].assignmentGrade;
        totalGrade = totalGrade + projectGrades[i].totalGrade;
    }
    // Calculates   
    if(totalGrade != 0) {
        double grade = (sum / totalGrade) * 100;
        // Sets the total exam grade
        this->totProject = grade;
    }
    else {
        this->totProject = 0;
    }
}

void Grade::setTotExam(){
    // Calculates individual category grade for exams
    // Intializes variables to 0
    // Loops through the for loop to add to each variable
    double sum = 0;
    double totalGrade = 0;

    for(int i = 0; i < examGrades.size(); i++){
        sum = sum + examGrades[i].assignmentGrade;
        totalGrade = totalGrade + examGrades[i].totalGrade;
    }
    // Calculates
    if(totalGrade != 0) {
        double grade = (sum / totalGrade) * 100;
        // Sets the total exam grade
        this->totExam = grade;
    }
    else {
        this->totExam = 0;
    }
}

void Grade::setStudentName(std::string name){
    // Sets student 
    this->studentName = name;
}

void Grade::setTotGrade(){
    //Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    double sum = 0;
    double totalPoints = 0;


    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    for(int i = 0; i < assignmentGrades.size(); i++){
        sum = assignmentGrades[i].assignmentGrade + sum; 
        totalPoints = totalPoints + assignmentGrades[i].totalGrade;
    }


    //Loops through labs vector, adds it to the sum, then adds total possible points to totalPoints.
    for(int i = 0; i < labGrades.size(); i++){
        sum = sum + labGrades[i].assignmentGrade;
        totalPoints = totalPoints + labGrades[i].totalGrade;
    }


    //Loops through project vector adds it to the sum and total possible points to totalPoints
    for(int i = 0; i < projectGrades.size(); i++){
        sum = sum + projectGrades[i].assignmentGrade;
        totalPoints = totalPoints + projectGrades[i].totalGrade;
    }

    for(int i = 0; i < examGrades.size(); i++){
        sum = sum + examGrades[i].assignmentGrade;
        totalPoints = totalPoints + examGrades[i].totalGrade;
    }

    //Calculates a final percentage grade using sum and totalPoints, couts the grade.
    float Total = (float)sum/totalPoints;
    Total= Total * 100;

    this->totGrade = Total;
}

void Grade::setOverallGrade(){
    //Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    double sum = 0;
    double totalPoints = 1000;


    //Loops through assignment vector, adds the points to sum
    for(int i = 0; i < assignmentGrades.size(); i++){
        sum = assignmentGrades[i].assignmentGrade + sum;
    }


    //Loops through labs vector
    for(int i = 0; i < labGrades.size(); i++){
        sum = sum + labGrades[i].assignmentGrade;
    }


    //Loops through the project vector
    for(int i = 0; i < projectGrades.size(); i++){
        sum = sum + projectGrades[i].assignmentGrade;
    }

    for(int i = 0; i < examGrades.size(); i++){
        sum = sum + examGrades[i].assignmentGrade;
    }

    //Calculates a final percentage grade using sum and totalPoints, couts the grade.
    float Total = (float)sum/totalPoints;
    Total = Total * 100;
    this->overallGrade = Total;
}

double Grade::getTotGrade(){
    setTotGrade();
    return this->totGrade;
}

double Grade::getOverallGrade(){
    setOverallGrade();
    return this->overallGrade;
}

double Grade::getIndividualGrade(std::string gradeCategory, std::string gradeName)  {
    bool found = false;
    int i = 0;
    double foundGrade = 0;

    // Checks to find which category has been requested and then moves through the vector for that category
    // If found, found is set to true and the grade is returned
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
    // For each categopry, it loops through the respective vector until the grade that you want to change is found
    // Sets the grade to the new grade 
    // This changes it in the vector and writes the output to the file after the program has been ended
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
}

void Grade::changetotalGrade(std::string gradeCategory, std::string gradeName, double newTotal)  {
    // For each categopry, it loops through the respective vector until the grade that you want to change is found
    // Sets the total grade to the new total grade 
    // This changes it in the vector and writes the output to the file after the program has been ended
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
    // Determines choice and outputs the correct information
    // Outputs all the deliverables in a category
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
