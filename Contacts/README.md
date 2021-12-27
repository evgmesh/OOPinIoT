# Project
### Assignment 7
Write a program to keep record of names, addresses and telephone numbers. 
Each structure contains the following information:<br>
• Name<br>
• E-mail address<br>
• Telephone number<br>
• City<br>
• Relative


The program must have (at least) following commands:
1. Initialize (clear all records)
2. Save contact information to file
3. Read contact information from file
4. Add new person to phone book
5. Remove a person from the phone book
6. Print a list of persons who live in the given city
7. Print all contact information, relatives are printed before other persons

### General guidelines
Global variables may not be used in any of the assignments.
Classes that are to be saved to a file must provide overloaded operators for writing to and reading from a file. <br>
A class may provide a separate member function for interactive entry of values.
Write user friendly programs:<br>
• When user is requested to enter values program must clearly state what type of values are expected<br>
• If user enters an invalid value an error message must displayed<br>
Reports must print data in formatted columns where printed data is aligned by columns. <br>
For example, when printing numbers make the field width large enough to hold largest number that you are going to print.<br>
Do not use “magic numbers” – define constants if you need to limit for example the range of valid values. <br>
Give descriptive names to classes and member functions.
Remember that you should delegate all tasks to objects. <br>
Start by thinking what each class in your program does and what is the relation between the classes.<br>
Use STL (containers, algorithms, etc.) as much as possible. 
STL was designed for efficiency so there is no point in trying to re-implement existing functionality.
