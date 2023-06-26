#include "gradebook.h"

//pushback the value given into the vector of Lab grades
void Grade::setLabGrade(double gradeValue, double totalValue, std::string gradeName, std::string gradeCat){
    // Create new struct
    // Assign parameter to struct
    // Push_back struct into correct vector
}

//pushback the value given into the vector of Assignment grades
void Grade::setAssignmentGrade(double gradeValue, double totalValue, std::string gradeName, std::string gradeCat){
    // Create new struct
    // Assign parameter to struct
    // Push_back struct into correct vector
}

//pushback the value given into the vector of project grades
void Grade::setProjectGrade(double gradeValue, double totalValue, std::string gradeName, std::string gradeCat) {
    // Create new struct
    // Assign parameter to struct
    // Push_back struct into correct vector
}

void Grade::setExamGrade(double gradeValue, double totalValue, std::string gradeName, std::string gradeCat) {
    // Create new struct
    // Assign parameter to struct
    // Push_back struct into correct vector
}

// Getters
std::string Grade::getStudentName(){
    // Return name
}

double Grade::getTotLab(){
    // Call setter
    // Return value
}

double Grade::getTotAssignment(){
    // Call setter
    // Return value
}

double Grade::getTotProject(){
    // Call setter
    // Return value
}

double Grade::getTotExam(){
    // Call setter
    // Return value
}

//uses private vector to get total lab grades using vec.size()
void Grade::setTotLab(){
    // Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    // Loops through lab vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    // Calculate grade
    // Set the grade value
}

//uses private vector to get total Assignment grades using vec.size()
void Grade::setTotAssignment(){
    // Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    // Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    // Calculate grade
    // Set the grade value
}

void Grade::setTotProject(){
    // Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    // Loops through project vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    // Calculate grade
    // Set the grade value
}

void Grade::setTotExam(){
    // Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    // Loops through exam vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    // Calculate grade
    // Set the grade value
}

void Grade::setStudentName(std::string name){
    // Sets student 
}

void Grade::setTotGrade(){
    //Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    //Loops through assignment vector, adds the points to sum, and total possible points to totalPoints after the loop ends
    //Loops through labs vector, adds it to the sum, then adds total possible points to totalPoints.
    //Loops through project vector adds it to the sum and total possible points to totalPoints
    //Calculates a final percentage grade using sum and totalPoints, then sets the grade.
}

void Grade::setOverallGrade(){
    //Initialize sum and totalPoints, which will store the total points earned and total points possible respectively
    // Total points will equal 1000
    //Loops through assignment vector, adds the points to sum
    //Loops through labs vector
    //Loops through the project vector
    // Loop through exam vector
    //Calculates a final percentage grade using sum and totalPoints, then sets the grade.
}

double Grade::getTotGrade(){
    // Call setter
    // Return value
}

double Grade::getOverallGrade(){
    // Call setter
    // Return value
}

double Grade::getIndividualGrade(std::string gradeCategory, std::string gradeName)  {
    // bool vairbale for false
    // Vairbales for i and found grade
    // i moves through the loops
    // Check category 
    // Run while loop while found is false and i is less than the vector size
    // If found, set valkue equal to the vector at i and set found to true
    // Increment i
    // Return found grade if foudn is true otherwise return 0
}

void Grade::changeGrade(std::string gradeCategory, std::string gradeName, double newGrade)  {
    // For each categopry, loop through the respective vector until the grade that you want to change is found
    // Use .size()
    // Sets the grade to the new grade 
}

void Grade::changetotalGrade(std::string gradeCategory, std::string gradeName, double newTotal)  {
    // For each categopry, it loops through the respective vector until the grade that you want to change is found
    // Sets the total grade to the new total grade 
}

void Grade::printCategory(int ifChoice) {
    // Take in choice
    // If choice is 1, loop through labs
    // Have if statements for other categories
    // In each, print out correct data
}

void Grade::outputFile(std::string fileName) {
    // Open output file
    // Write name to file
    // Loop through the vectors and write data to file
    // Close
    // Indicate file has been closed
}
