// Grade.H

// get all grades
class Grade {

  Private:
    std::vector <double> labGrades;
    std::vector <double> assingmentGrades;
    std::vector <double> projectGrades;
    double examGrade;

    double totLab;

    double totAssignment;

    double totGrade;

  Public:

    //pushback the value given into the vector of Lab grades

    int getLabGrade(int gradeValue);

    //pushback the value given into the vector of Assignment grades

    int getAssignmentGrade(int gradeValue);

    //pushback the value given into the vector of project grades

    int getProjectGrade(int gradeValue);

    //sets the value of private Final exam

    int getFinalExamGrade(int gradeValue);

    //uses private vector to get total lab grades using vec.size()

    double setTotLab();

    //uses private vector to get total Assignment grades using vec.size()

    double setTotAssignment();

    //uses private totlab and totAssignment along with vector for project grades

    double totGrade();
  };
