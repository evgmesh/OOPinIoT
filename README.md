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

## [Excercise 5](Assignment05) Implement operators
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

## [Excercise 6 A](Assignment06) Implement more operators and a new constructor
Improve class you wrote in exercise 4&5 by adding overloaded operators and by splitting it to header and source files.<br>
The operators to add are:
1. Input operator ( >> ) that extracts time from a stream. 
2. The format of the time in the stream is assumed to be same as output (two numbers separated by a colon).
3. Comparison operator greater than ( > ) that compares two times
4. Comparison operator equal to ( == ) that compares two times
5. Implement a constructor that takes hours and minutes as parameter

Header should only contain class definition and possibly some includes required by the definition. <br>
In the example below #pragma once is nowadays widely supported mechanism that works the same way as header guards after the pragma. <br>
The header guards are used to prevent including same header multiple times. <br>
Note that header should not contain any code that can be executed i.e. no function implementations.

## [Excercise 6 B ](Assignment06) String streams
Implement class Day to hold calendar events of one day. <br>
**Member list** is used to store times of event on a day. Note that we don’t store event names only starting time of each event.<br>
**Member function from_str** reads events from a string. 
All existing data (date and event times) are erased by from_str before it makes an attempt to read data. <br>
The function returns true if date and at least one event time was successfully read otherwise the function returns false.<br> 
Function sorts the event times in ascending order before returning.<br>
The string from which to read contains day and month separated by spaces and a list of events start times separated by spaces.<br>
For example:<br>
13 January 12:00 14:45<br>
14 January 09:00 11:30 13:15 16:00 12:00<br>
1 February 19:00 21:30<br>
2 February 12:00 14:45<br>
1 April 10:00 11: Broken<br>
1 May 8:00 17:55<br>
2 May 00:01 22:00 13:05<br>
7 May Broken<br>
28 May 10:00 17:45<br>
In the example above there is one completely incorrect line (May 7th) that should be completely 
ignored and one partially incorrect line (April 1st) where the last time is invalid and should be ignored.<br>
**Member function to_str** returns a string of event times. <br>The format of the string is the same as from_str 
input string format: day and month separated by spaces followed by a list of event times separated by spaces.<br>
**Member function dst** adds an offset to times. 
The offset is number of hours to add. Note that the function needs to roll time properly over 24:00 but it does not need to change the date on roll over.<br>
Test your class with the following code and with different data files not just the one example provided in the assignment.<br>
Example test output:<br>
Calendar <br>
13 January 12:00 14:45<br>
14 January 09:00 11:30 12:00 13:15 16:00<br>
1 February 19:00 21:30<br>
2 February 12:00 14:45<br>
1 April 10:00<br>
1 May 08:00 17:55<br>
2 May 00:01 13:05 22:00<br>
28 May 10:00 17:45<br>
DST<br>
13 January 13:00 15:45<br>
14 January 10:00 12:30 13:00 14:15 17:00<br>
1 February 20:00 22:30<br>
2 February 13:00 15:45<br>
1 April 11:00<br>
1 May 09:00 18:55<br>
2 May 01:01 14:05 23:00<br>
28 May 11:00 18:45<br>
End<br>
## [Excercise 7 A](Assignment07) Function objects
Produce random number generator class to create a lotto number generator:<br>
Constructor takes two parameters that determine the range of numbers that the generator produces.<br>
Write a program that generates numbers for three different games:<br>

1. Lotto: 7 numbers 1 – 40
2. Viking lotto: 6 numbers 1 – 48
3. Eurojackpot: 5 numbers 1 – 50
   
Use either generate or generate_n algorithm to generate the three sets of numbers.<br>
Print each set of numbers using a suitable algorithm and output stream iterator.<br>
Then find numbers that appear in all three sets and print them. <br>
Use set_intersection algorithm to find the numbers that appear in all three sets:<br>
   • Find matching numbers from two sets and print them using for_each algorithm<br>
   • Find matching number from the third set and print them using for_each algorithm<br>
   To print the numbers with index numbering you need to use a function object (can also be implemented with a lambda) 
to remember the index between calls.<br>
Example:<br>
Lotto: 1 12 24 36 11 15 32<br>
Viking lotto: 24 7 11 18 35 1<br>
Matching numbers:<br>
1: 1<br>
2: 11<br>
3: 24<br>
Eurojackport: 47 1 40 24 4<br>
Matching numbers in three sets:<br>
1: 1<br>
2: 24<br>
After finding the matching numbers ask user if he/she wants to continue. <br>
If the answer is yes then generate another three sets of lotto numbers.

## [Excercise 8 A](Assignment08) Inheritance
In this exercise we define a Person class that simply holds a person’s name and prints it when needed. <br>
We derive a Spy class from Person and add member function that can be used to set an alias for the spy. <br>
Use the following definition for Person class.
```c++
class Person {
public:
Person(const char *name = "nobody"); virtual ~Person() = default;
virtual void identity() const; virtual void interrogate();
private:
std::string name;
};
```
Identity() prints the name of the person.
Interrogate() does nothing (empty body) in class Person.
Derive Spy from Person and the following function:
void set_identity(const char *alias);
Spy constructor must take three parameters: name of the spy, alias of the spy, and resistance. Resistance is an integer that represents spy’s resistance to interrogation. Every time interrogate() is called resistance is decremented by one. When resistance is greater than zero identity() prints alias of the spy instead of the real name. When resistance is less than one identity() prints both real name and alias of the spy.
Set_identity sets the spy’s alias.
Note that you must override indentity() and interrogate() in class Spy.