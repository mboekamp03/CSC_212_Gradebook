CSC 212 - 211 Project
---------------------

Summary
---------------------
The task for this project was to create a gradebook for the CSC212 course. The gradebook must contain functions to return specific grades of specific assignments, total category grades, total overall grades, both weighted and current, and allow amendments to the “.txt” file which the grades will be entered from.

Planning
---------------------
We met several times throughout the duration of the project to discuss implementation and to bounce ideas off of one another. Our early meetings were centered around discussing the basic structure of our code and developing good pseudocode to guide us through the rest of the process. The later meetings involved coding, implementing new elements we previously had not thought of, and debugging.

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
Once this appears, enter the number which corresponds to your desired output.

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

This is your grade when looking at all the number of points available. So if you only have one assignment grade and it is 100%, this will output 5 as you only have 5% of the grades.

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
If you enter 5 when prompted for a choice, the program will ask for a category. This category can be either uppercase or lowercase (Lab or lab).

The program will then prompt you to enter a deliverable name. These must be formatted like Lab1, Assignment1, Project1, and Final as this is how they appear in the .txt file.

For labs, the deliverables are named Lab1, Lab2, Lab3, Lab4, Lab5, Lab6, Lab7, and Lab8

For assignments, the deliverables are named Assignment1, Assignment2, Assignment3, and Assignment4

For projects, the deliverables are named Project1 and Project2

For the exam, the deliverable is named Final

From here, the program will prompt you to enter a new grade to replace the existing one.

An example of this using lab, Lab1, and 10 follows:
```
Please input the name of the category! (example: lab/ assignment / project / exam ) lab

Input the Grade Name you would like to change. Lab1

Input the New Grade. 10
```
The changes made will appear on the output file after the program is closed.

6
---------------------
If you enter 6 when prompted for a choice, you will be prompted to select an category. This can be either uppercase or lowercase.

The program will then prompt you to enter a deliverable name. These must be formatted like Lab1, Assignment1, Project1, and Final as this is how they appear in the .txt file.

For labs, the deliverables are named Lab1, Lab2, Lab3, Lab4, Lab5, Lab6, Lab7, and Lab8

For assignments, the deliverables are named Assignment1, Assignment2, Assignment3, and Assignment4

For projects, the deliverables are named Project1 and Project2

For the exam, the deliverable is named Final

From here, the program will output the grade of that assignment

An example of this using assignment and Assignment1 follows:
```
Please input the name of the category! (example: lab/ assignment / project) assignment

Input the Grade Name you would like to see. Assignment1
40
```

7
---------------------
If you enter 7 when prompted for a choice, the program will ask for a category. This category can be either uppercase or lowercase (Lab or lab).

The program will then prompt you to enter a deliverable name. These must be formatted like Lab1, Assignment1, Project1, and Final as this is how they appear in the .txt file.

For labs, the deliverables are named Lab1, Lab2, Lab3, Lab4, Lab5, Lab6, Lab7, and Lab8

For assignments, the deliverables are named Assignment1, Assignment2, Assignment3, and Assignment4

For projects, the deliverables are named Project1 and Project2

For the exam, the deliverable is named Final

From here, the program will prompt you to enter a new total grade for that deliverable to replace the existing one.

An example of this using project, Project1, and 200 follows:
```
Please input the name of the category! (example: lab/ assignment / project / exam ) project

Input the Grade Name you would like to change. Project1

Input the New Grade. 200
```
The changes made will appear on the output file after the program is closed.


0
---------------------
If you enter 0 when prompted for a choice, you will exit the program.

If you make changes, those will be written to the input file once the program is exitted.

An example of the output without changes is below: 
```
0
Program End!
```
An example of the output with changes is below: 
```
0
Program End!
Grades have been written to the file.
```

Sample Output
---------------------
grade1.txt
---------------------
<img width="1920" alt="Screenshot 2023-06-26 at 7 47 00 PM 2" src="https://github.com/mboekamp03/CSC-212-Project/assets/98491428/af2d926c-50e3-4ee9-af74-55aa3c44e3fb">
<img width="1920" alt="Screenshot 2023-06-26 at 7 47 44 PM (2)" src="https://github.com/mboekamp03/CSC-212-Project/assets/98491428/648ff30d-07b6-4c39-a016-094dde172b61">

grade1.txt

Before:
<img width="1920" alt="Screenshot 2023-06-26 at 7 45 34 PM (2)" src="https://github.com/mboekamp03/CSC-212-Project/assets/98491428/2198611b-a79c-4e1e-bc8a-1b76bc45e5b9">

After:
<img width="1920" alt="Screenshot 2023-06-26 at 7 47 57 PM (2)" src="https://github.com/mboekamp03/CSC-212-Project/assets/98491428/497f78f0-1046-48e5-934c-10e03ed045ba">

grade2.txt
---------------------
<img width="1920" alt="Screenshot 2023-06-26 at 7 28 11 PM (2)" src="https://github.com/mboekamp03/CSC-212-Project/assets/98491428/7461109c-88da-4a7e-a93f-0ac735f73c1f">
<img width="1920" alt="Screenshot 2023-06-26 at 7 29 30 PM (2)" src="https://github.com/mboekamp03/CSC-212-Project/assets/98491428/093d548d-e9a2-4d20-8677-de81c7f22462">


grade3.txt
---------------------
<img width="1920" alt="Screenshot 2023-06-26 at 7 30 52 PM (2)" src="https://github.com/mboekamp03/CSC-212-Project/assets/98491428/e9961bc3-5edf-4357-8694-d9b3da499857">
<img width="1920" alt="Screenshot 2023-06-26 at 7 31 05 PM (2)" src="https://github.com/mboekamp03/CSC-212-Project/assets/98491428/0c39a82e-4513-40a1-aff8-43e6f9bdacad">
