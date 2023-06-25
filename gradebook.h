#include <iostream>
#include <vector>


class Grade {

private:
    // Struct to hold all the values for a deliverable 
    struct Assignment {
        std::string assignmentName;
        double assignmentGrade;
        double totalGrade;
        std::string assignmentCategory;
    };
    // String for student name
    std::string studentName;

    // Vectors to hold all deliverables in their correct category
    std::vector <Assignment> labGrades;
    std::vector <Assignment> assignmentGrades;
    std::vector <Assignment> projectGrades;
    std::vector <Assignment> examGrades;

    // Variables to hold grades for categories and for the course overall
    double totLab;
    double totAssignment;
    double totProject;
    double totExam;
    double totGrade;
    double overallGrade;

public:

    //pushback the value given into the vector of Lab grades
    void setLabGrade(double gradeValue, double totalValue, std::string gradeName, std::string gradeCat);

    //pushback the value given into the vector of Assignment grades
    void setAssignmentGrade(double gradeValue, double totalValue, std::string gradeName, std::string gradeCat);

    //pushback the value given into the vector of project grades
    void setProjectGrade(double gradeValue, double totalValue, std::string gradeName, std::string gradeCat);

    //sets the value of private Final exam
    void setExamGrade(double gradeValue, double totalValue, std::string gradeName, std::string gradeCat);

    //gets the student name
    std::string getStudentName();

    // Gets the total grade for all labs
    double getTotLab();

    // Gets the total grade for all assignments
    double getTotAssignment();

    // Gets the total grade for all projects
    double getTotProject();

    // Gets the total grade for all exams
    double getTotExam();

    // Sets the name parameter to the private name vairable to be used later on
    void setStudentName(std::string name);

    // Loops through the lab vector and calculates the total grade and sets it to the private variable 
    void setTotLab();

    // Loops through the assignment vector and calculates the total grade and sets it to the private variable 
    void setTotAssignment();

    // Loops through the project vector and calculates the total grade and sets it to the private variable 
    void setTotProject();

    // Loops through the exam vector and calculates the total grade and sets it to the private variable 
    void setTotExam();

    // Loops through all the vectors to calculate current grade at the moment
    // For example, if you have only done 2 assignments and got 100 on each this would return 100%
    void setTotGrade();

    // Loops through all the vectors to calculate current grade in the course overall
    // For example, if you have only done 2 assignments and got 100 on each this would return approxiamtely 10%
    void setOverallGrade();

    // Getter to return the total grade
    double getTotGrade();

    // Getter to return the overall grade
    double getOverallGrade();

    // Takes the input to find a deliverable
    // Returns the grade of that deliverable
    double getIndividualGrade(std::string gradeCategory, std::string gradeName);

    // Parameters find the grade you wish to change and the grade is set to the newGrade parameter
    void changeGrade(std::string gradeCategory, std::string gradeName, double newGrade);

    // Parameters find the grade you wish to change and the total grade is set to the newTotal parameter
    void changetotalGrade(std::string gradeCategory, std::string gradeName, double newTotal);

    // Prints the category the user selects
    void printCategory(int ifChoice);

    // If changes are made to the program this function is called at the end of main.cpp
    // Takes in the file name and writes to that file after the original data has been erased
    void outputFile(std::string fileName);
};
