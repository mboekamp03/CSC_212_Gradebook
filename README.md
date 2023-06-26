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
