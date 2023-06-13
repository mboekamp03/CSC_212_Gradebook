Class Grade {

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

Grade.cpp

//pushback the value given into the vector of Lab grades
 int Grade::getLabGrade(int gradeValue){
	takes the grade value
	uses it to do labGrades.pushback(gradeValue)

}

//pushback the value given into the vector of Assignment grades
int Grade::getAssignmentGrade(int gradeValue){
	takes the grade value
	uses it to do assignmentGrades.pushback(gradeValue)
}

//pushback the value given into the vector of project grades
int Grade::getProjectGrade(int gradeValue)
	takes the grade value
	uses it to do projectGrades.pushback(gradeValue)
}

//sets the value of private Final exam
int Grade::getFinalExamGrade(int gradeValue){
	uses this keyword to set private value of finalExam to gradeValue
}

//uses private vector to get total lab grades using vec.size()
double Grade::setTotLab(){
	
	make a temp value
	use a for loop to go to the size of labGrades.size()
		add to temp value

	end for loop

	set totlab to temp
	
}

//uses private vector to get total Assignment grades using vec.size()
double Grade::setTotAssignment(){
	make a temp value
	use a for loop to go to the size of labGrades.size()
		add to temp value

	end for loop

	set totAssignment to temp
}

//uses private totlab and totAssignment along with vector for project grades
double Grade::totGrade(){
	
}
