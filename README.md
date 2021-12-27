# OOPinIoT

## [Excercise 1](Assignment01.cpp)<br>
Write a program that first asks from the user how many numbers he needs. <br>
After that the program allocates memory space to store those numbers (integer array). <br>
Next the program fills the array with random numbers between 0 - 99, and the program displays all 
numbers from the array. <br>
After that the program calculates the mean of the generated number calling a separate function, int mean(int *array, int n).<br> 
Finally the program must free the memory space it allocated.<br>
There is rand() function for generating random numbers. 
Limiting the range to [0,99] is done with rand() % 100. <br>
In order to use rand() function you must include cstdlib header.

## [Excercise 2 A](Assignment02A.cpp) Using string class member functions

The program reads the whole xml-file [wheather.xml](weather.xml) into a single string object.<br>
Develop the program further so that it finds and extracts specified items from the xml- string using start and end tags.<br>
Now we find and extract and display first the location information and then the temperature information. 
Location can be found between the tags <location> and </location>.<br> 
The temperature is between the tags <temp_c> and </temp_c>.
<br>To make it easy to find whatever information from the, xml-string write a 
function that takes the xml-string and the "inner" text (same for start tag and end tag) of the tags as parameters and 
returns the text from between the start tag and end tags. <br>If either start or end tag is not found the function must return "not found". <br>
Note that when you search for the tag you must search for the whole tag (including angle brackets) 
not just the tag name that was given as parameter.<br>
For example, if you wanted to find the location
location = find_field(page, "location");<br>
and to get the temperature you could call it as follows:
temperature = find_field(page, "temp_c");

## [Excercise 2 B](Assignment02B.cpp) Vector of strings
Write a program that reads strings from the keyboard. <br>
There is no upper limit for the number of strings. All strings are stored in a vector of strings. <br>
The data entry phase terminates when the user enters the “stop” string. <br>
This termination string is not stored in the vector.<br>
When all strings have been entered the program displays all strings from the vector and the number of strings entered. <br>
Then the program finds out the longest string from the array and prints the longest string and its length.<br>
The last thing the program does is that it displays the values returned by the 
member functions size and capacity of the vector.

## [Excercise 3 A](Assignment03A.cpp) Simple sorting
Write a program that defines a vector of double. 
The program asks user to enter numbers and stores the numbers in the vector. <br>
The program stops asking numbers when user enter a negative number. 
The negative number is not stored the vector.<br>
When program has finished asking numbers it sorts the numbers. 
After sorting the program prints the numbers on separate lines with 3 decimal precision.<br>
Iomanipulators can be used to change formatting of output (and input) streams.

## [Excercise 3 B](Assignment03B.cpp) Parameter passing and more algorithms
Write a function called backwards that takes a reference to a vector of strings as a parameter. <br>
The function reverses all strings in the vector and then sorts the vector in descending order.<br>
Write a program that reads strings from the keyboard. There is no upper limit for the number of strings. <br>
All strings are stored in a vector of strings. 
The data entry phase terminates when the user enters the “stop” string. <br>
This termination string is not stored in the vector.<br>
When all strings have been entered the program prints the vector elements on separate lines. <br>
Then program calls backwards and passes the vector as parameter. After the call the program prints the vector again.
For example:<br>
If original content of the vector is:<br>
*acb<br>
Doom<br>
Beast<br>
option<br>
dentax*<br>
After calling backwards the vector contains: <br>
*xatned<br>
tsaeB<br>
noitpo<br>
mooD<br>
bca*<br>

## [Excercise 4](Assignment04) Implement a class
We need to write an application, which reads two times (times are represented by two integers: 
hours and minutes). <br>Then the program finds out which time is later. 
After that it calculates the time difference between these times. <br>
Finally, the program displays the smaller (earlier) time and the time difference (duration) in the format
starting time was 11:22 duration was 1:04<br>

Now you need to define and implement class Time so that the program starts working. <br>
As can be seen from the main function, class Time has the following member functions:<br>
1. ***read*** that is used to read time (minutes and hours) from the keyboard. 
2. ***lessThan*** that is used to compare two times.
3. ***subtract*** that is used to calculate time difference between two times.
4. ***display*** that is used to display time in the format hh:mm.

## [Excercise 4](Assignment05) Implement operators
Improve class you wrote in exercise 4 by adding overloaded operators. The operators to add are:<br>
1. Output operator ( << ) that outputs the time in two character fields with leading zeros 
and separates the fields with a colon.
2. Comparison operator less than ( < ) that compares two times
3. Addition operator ( + ) that adds two times
4. Subtract operator ( - ) that subtracts two times.
5. Pre and post increment operators ( ++ ). Both operators increment the time by one
   minute.


Your class should work with the test program below. <br>
Note that your class must have a default constructor that initializes time to 0:00.<br>
Addition must make times to roll over to “next day” but doesn’t have to keep track of days. <br>
For example, adding 14:30 and 13:45 should result in 4:15 or adding 18:30 and 5:37 should yield 0:07.