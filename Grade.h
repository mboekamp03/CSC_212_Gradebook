// Grade.H

#include <iostream>
#include <vector>
// get all grades
class Grade {

  private:
    struct Assignment {
        std::string assignmentName;
        int assignmentGrade;
    };

    std::vector <Assignment> labGrades;
    std::vector <Assignment> assignmentGrades;
    std::vector <Assignment> projectGrades;
    double examGrade;
 
    double totLab;
    double totAssignment;
    double totGrade;

  public:

    //pushback the value given into the vector of Lab grades

    void getLabGrade(int gradeValue, std::string gradeName);

    //pushback the value given into the vector of Assignment grades

    void getAssignmentGrade(int gradeValue, std::string gradeName);

    //pushback the value given into the vector of project grades

    void getProjectGrade(int gradeValue, std::string gradeName);

    //sets the value of private Final exam

    void getFinalExamGrade(int gradeValue);

    //uses private vector to get total lab grades using vec.size()

    double setTotLab();

    //uses private vector to get total Assignment grades using vec.size()

    double setTotAssignment();

    //uses private totlab and totAssignment along with vector for project grades

    double totGrade();
  };
