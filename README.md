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
John Doe
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

You 
