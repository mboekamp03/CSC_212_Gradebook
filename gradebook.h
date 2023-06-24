// gradebook.h

#include <iostream>
#include <vector>
// get all grades
class Grade {

private:
    struct Assignment {
        std::string assignmentName;
        double assignmentGrade;
        double totalGrade;
        std::string assignmentCategory;
    };
    std::string studentName;
    std::vector <Assignment> labGrades;
    std::vector <Assignment> assignmentGrades;
    std::vector <Assignment> projectGrades;
    std::vector <Assignment> examGrades;
    double examGrade;

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


    //gets final exam grade


    std::string getStudentName();

    double getTotLab();

    double getTotAssignment();

    double getTotProject();

    double getTotExam();
    //uses private vector to get total lab grades using vec.size()

    void setStudentName(std::string name);

    void setTotLab();

    //uses private vector to get total Assignment grades using vec.size()

    void setTotAssignment();

    //uses private totlab and totAssignment along with vector for project grades

    void setTotProject();

    void setTotExam();

    void setTotGrade();

    void setOverallGrade();

    double getTotGrade();

    double getOverallGrade();

    double getIndividualGrade(std::string gradeCategory, std::string gradeName);

    void changeGrade(std::string gradeCategory, std::string gradeName, double newGrade);

    void changetotalGrade(std::string gradeCategory, std::string gradeName, double newTotal);

    void printCategory(int ifChoice);

    void outputFile(std::string fileName);
};
