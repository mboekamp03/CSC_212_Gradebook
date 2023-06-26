CSC 212 - 211 Project
---------------------

Summary
---------------------
The task for this project was to create a gradebook for the CSC212 course. The gradebook must contain functions to return specific grades of specific assignments, total category grades, total overall grades, both weighted and current, and allow amendments to the “.txt” file which the grades will be entered from.

Planning
---------------------
We met several times throughout the duration of the project to discuss implementation and to bounce ideas off of one and other. Our early meetings were centered around discussing the basic structure of our code and developing good pseudocode to guide us through the rest of the process. The later meetings involved coding, implementing new elements we previously had not thought of, and debugging.

Instructions
---------------------
To compile our code, use the following command in the terminal:
```
g++ main.cpp gradebook.cpp -o program
```
To run the program after compiling, use the following command in the terminal with <file_name> replaced with the name of the file you wish to run: 
```
./program <file_name>.txt 
```
After running this command in the terminal, you will see the following text appear in it:
```
<student_name>
Choose a number to view categories or make changes!
1: View Category
2: View Total Grade
3: View Overall Grade
4: View Total Category Grade
5: Change a Grade
6: View Individual Grade
7: Change the Total Grade
0: To Quit
```
Once this appears, enter the number which corresponds to your desire output.

Instructions for Choices
---------------------
1
---------------------
If you enter 1 when prompted for a choice, you will open another menu to choose a category:
```
Choose a number to choose a category!
1: LABS
2: ASSIGNMENTS
3: PROJECTS
4: EXAMS
```
From here, You can enter 1 to view lab grades, 2 to view assignment grades, 3 to view project grades, and 4 to view exam grades.

If you choose 1, the terminal will look like the following:
```
1
Lab1 25
 
Lab2 20
 
Lab3 25
 
Lab4 0
 
Lab5 25
 
Lab6 25
 
Lab7 15
 
Lab8 20
```
2
---------------------
If you enter 2 when prompted for a choice, you will view your current grade.

This is your grade at the moment. So if you only have one assignment grade and it is 100%, this will output 100 as you have 100 of the possible points up to that point.

An example of the output is below: 
```
2
Total Grade: 90.5
```
3
---------------------
If you enter 3 when prompted for a choice, you will view your overall grade.

This is your grade when looking at all the course overall. So if you only have one assignment grade and it is 100%, this will output 5 as you only have 5% of the grades.

An example of the output is below: 
```
3
Overall Grade: 90.5
```
4
---------------------
If you enter 4 when prompted for a choice, you will open a menu to choose a category. The menu opened is the same as above and you will be prompted for another choice.

Once again, You can enter 1 to view lab grades, 2 to view assignment grades, 3 to view project grades, and 4 to view exam grades.

If you choose 1, the terminal will look like the following:

An example of the output is below: 
```
1
77.5
```
5
---------------------
If you enter 4 when prompted for a choice, the program will ask for a category. This category can be either uppercase or lowercase (Lab or lab).

The program will then prompt you to enter a deliverable name. These must be formatted like Lab1, Assignment1, Project1, and Final as this is how they appear in the .txt file.

For labs, the deliverables are named Lab1, Lab2, Lab3, Lab4, Lab5, Lab6, Lab7, and Lab8

For assignments, the deliverables are named Assignment1, Assignment2, Assignment3, and Assignment4

For projects, the deliverables are named Project1 and Project2

For the exam, the deliverable is named Final

An example of the output is below: 
```
1
77.5
```
