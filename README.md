# OOPinIoT

## [Excercise 1](Assignment01.cpp)<br>
Write a program that first asks from the user how many numbers he needs. After that the program allocates memory space to store those numbers (integer array). 
Next the program fills the array with random numbers between 0 - 99, and the program displays all numbers from the array. 
After that the program calculates the mean of the generated number calling a separate function, int mean(int *array, int n). 
Finally the program must free the memory space it allocated.
There is rand() function for generating random numbers. 
Limiting the range to [0,99] is done with rand() % 100. In order to use rand() function you must include cstdlib header.

## [Excercise 2 A](Assignment02A.cpp) Using string class member functions

The program reads the whole xml-file [wheather.xml](weather.xml) into a single string object.<br>
Develop the program further so that it finds and extracts specified items from the xml- string using start and end tags. 
Now we find and extract and display first the location information and then the temperature information. 
Location can be found between the tags <location> and </location>. The temperature is between the tags <temp_c> and </temp_c>.
To make it easy to find whatever information from the, xml-string write a 
function that takes the xml-string and the "inner" text (same for start tag and end tag) of the tags as parameters and 
returns the text from between the start tag and end tags. If either start or end tag is not found the function must return "not found". 
Note that when you search for the tag you must search for the whole tag (including angle brackets) 
not just the tag name that was given as parameter.
For example, if you wanted to find the location
location = find_field(page, "location");
and to get the temperature you could call it as follows:
temperature = find_field(page, "temp_c");

## [Excercise 2 B](Assignment02B.cpp) Vector of strings
Write a program that reads strings from the keyboard. 
There is no upper limit for the number of strings. All strings are stored in a vector of strings. 
The data entry phase terminates when the user enters the “stop” string. 
This termination string is not stored in the vector.
When all strings have been entered the program displays all strings from the vector and the number of strings entered. 
Then the program finds out the longest string from the array and prints the longest string and its length.
The last thing the program does is that it displays the values returned by the 
member functions size and capacity of the vector.

## [Excercise 3 A](Assignment03A.cpp) Simple sorting
Write a program that defines a vector of double. The program asks user to enter numbers and stores the numbers in the vector. 
The program stops asking numbers when user enter a negative number. 
The negative number is not stored the vector.
When program has finished asking numbers it sorts the numbers. 
After sorting the program prints the numbers on separate lines with 3 decimal precision.
Iomanipulators can be used to change formatting of output (and input) streams. 
See http://www.cplusplus.com/reference/iomanip/setprecision/ for an example.