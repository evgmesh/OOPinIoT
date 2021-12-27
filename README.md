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
*13 January 12:00 14:45<br>
14 January 09:00 11:30 13:15 16:00 12:00<br>
1 February 19:00 21:30<br>
2 February 12:00 14:45<br>
1 April 10:00 11: Broken<br>
1 May 8:00 17:55<br>
2 May 00:01 22:00 13:05<br>
7 May Broken<br>
28 May 10:00 17:45*<br>
In the example above there is one completely incorrect line (May 7th) that should be completely 
ignored and one partially incorrect line (April 1st) where the last time is invalid and should be ignored.<br>
**Member function to_str** returns a string of event times. <br>The format of the string is the same as from_str 
input string format: day and month separated by spaces followed by a list of event times separated by spaces.<br>
**Member function dst** adds an offset to times. 
The offset is number of hours to add. Note that the function needs to roll time properly over 24:00 but it does not need to change the date on roll over.<br>
Test your class with the following code and with different data files not just the one example provided in the assignment.<br>
Example test output:<br>
*Calendar <br>
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
End*<br>
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
*Lotto: 1 12 24 36 11 15 32<br>
Viking lotto: 24 7 11 18 35 1<br>
Matching numbers:<br>
1: 1<br>
2: 11<br>
3: 24<br>
Eurojackport: 47 1 40 24 4<br>
Matching numbers in three sets:<br>
1: 1<br>
2: 24*<br>
After finding the matching numbers ask user if he/she wants to continue. <br>
If the answer is yes then generate another three sets of lotto numbers.

## [Excercise 8 A](Assignment08) Inheritance
In this exercise we define a Person class that simply holds a person’s name and prints it when needed. <br>
We derive a Spy class from Person and add member function that can be used to set an alias for the spy. <br>
Use the following definition for Person class.
```c++
class Person {
public:
Person(const char *name = "nobody"); 
virtual ~Person() = default;
virtual void identity() const; 
virtual void interrogate();
private:
std::string name;
};
```
***Identity()*** prints the name of the person.
***Interrogate()*** does nothing (empty body) in class Person.
Derive Spy from Person and the following function:<br>
```void set_identity(const char *alias); ``` <br>
Spy constructor must take three parameters: name of the spy, alias of the spy, and resistance. <br>
Resistance is an integer that represents spy’s resistance to interrogation. Every time ***interrogate()*** is called resistance is decremented by one.<br> 
When resistance is greater than zero ***identity()*** prints alias of the spy instead of the real name. <br>
When resistance is less than one ***identity()*** prints both real name and alias of the spy.<br>
***Set_identity*** sets the spy’s alias.<br>
Note that you must override ***identity()*** and ***interrogate()*** in class Spy.<br>
Example output for test program:<br>
*Nice to meet you. My name is: James Bond Who are you?<br>
My name is: William Johnson<br>
Who are you?<br>
My name is: William Johnson Who are you?<br>
My name is: Emilio Largo<br>
My alias is: William Johnson Who are you?<br>
My name is: Emilio Largo<br>
My alias is: William Johnson Who are you?<br>
My name is: Emilio Largo<br>
My alias is: William Johnson Who are you?<br>
My name is: Emilio Largo<br>
My alias is: William Johnson My name is: Emilio Largo<br>
My alias is: Bill Munny<br>
Nice to meet you. My name is: James Bond Who are you?<br>
My name is: John Keats<br>
Who are you?<br>
My name is: John Keats<br>
Who are you?<br>
My name is: John Keats<br>
Who are you?<br>
My name is: John Keats<br>
Who are you?<br>
My name is: Ernst Blofield<br>
My alias is: John Keats<br>
Who are you?<br>
My name is: Ernst Blofield<br>
My alias is: John Keats*

## [Excercise 9 A](Assignment09) Polymorphism

Derive two classes from class Point:<br>
1. Circle: add radius
2. Square: add width and height.
   
All derived classes must implement all virtual functions and define constructors that take 2 – 4 values as parameter 
depending on the class. <br>
All parameters must have a default value.<br>
Write a program that defines a vector of shared pointers to the base class. <br>
Then program puts the following objects into vector:<br>
• Point with coordinates (1.0, 1.0)<br>
• Circle at (2.0, 2.0) with radius 2.0<br>
• Square at (5.0, 5.0) with width and height of 2.0<br>
• Square whose data is asked from user before adding to the vector<br>
• Circle whose data is asked from user before adding to the vector<br>
• Point whose data is asked from user before adding to the vector

When vector has been filled program does the following:<br>
1. Prints the object data
2. Sorts the vector by area
3. Prints the object data

Example output:<br>
*Coordinates: (1,1)<br>
Circle's area: 12.5664 Coordinates: (2,2) <br>
Square's area: 4 Coordinates: (5,5) <br>
Sorted:<br> 
Coordinates: (1,1)<br>
Square's area: 4 Coordinates: (5,5) <br>
Circle's area: 12.5664 Coordinates: (2,2)<br>
Example output of calls to input():<br>
Point:<br>
Enter x:2.3 <br>
Enter y:5.7 <br>
Circle:<br>
Enter x:3.4 <br>
Enter y:4.5 <br>
Enter radius: 6.7 <br>
Square:<br>
Enter x:1.2 <br>
Enter y:2.3 <br>
Enter height: 3.4 <br>
Enter width: 4.5*

## [Excercise 9 B](Assignment09) Extra

Make program add five random objects to the vector. <br>
The object data must be asked from user before adding the object to the vector.

## [Excercise 10](Assignment10) Abstract class
In this exercise you need to derive two classes from an abstract class and write a function that helps in testing the classes. <br>
Your starting point is an abstract class called Counter that defines an interface for incrementing and decrementing a counter 
and a conversion operator that can be used to read or print the current counter value.


Derive a class called LimitedCounter.<br>
• The constructor takes two parameters: initial value and upper limit<br>
• Counter can’t be incremented over the upper limit. If inc() is called when counter
has reached the upper limit nothing happens<br>
• Counter can’t be decremented below zero. If counter is zero then calling dec() will
have no effect


Derive a class called OverflowCounter.<br>
• The constructor takes two parameters: initial value and upper limit<br>
• When counter has reached the upper limit incrementing the value will set the
counter to zero.<br>
• When counter is zero decrementing the counter sets counter to upper limit.

Implement function called UseCounter.
```c++
void UseCounter(Counter& ctr, int num);
```
Function takes two parameters: a reference to Counter and number that tells
how many times the counter should be incremented or decremented. <br>
A negative value decrements counter and positive value increments counter.


Test your counters with different values and ways. 
Pay attention to the limits and make sure that they work properly.

## [Excercise 11](Assignment11) Observer pattern
Modify the class OverflowCounter of execise 10 so that it informs a single observer, when an overflow has occurred. <br>
The Observer is an interface class that any class can implement, if it wants to be informed about an overflow. <br>
Usually this class is a class that uses the counter. <br>
The advantage of this pattern is that when the OverflowCounter class has been implemented and tested, it does not need any modification even when we use it from any kind of “counter user objects”. <br>
Only thing we need to do to get our counter user class to be informed is to implement the Observer interface in the counter user class.<br>
To make this work and see how it works in practice you need the following modifications to the OverflowCounter class:<br>
• Add a data member that points to the Observer interface class.
```c++
Observer* obs;
```
• Add function SetObserver, that sets the pointer member to point to any object that implements the Observer interface.
```c++
void SetObserver(Observer *)
```
• Add private function ***Notify***, that informs the observer by calling the function
***HandleLimitReached()*** of the observer.<br>
Only one function is needed in the interface of the observer. 
The function is called HandleLimitReached. <br>
This function is used in a way to pass the message “Limit has been reached” from the OverflowCounter to the observer. <br>
This member function of observer is called from the member function Notify of the OverflowCounter.
```c++
class Observer {
public:
virtual void HandleLimitReached() = 0;
};
```
To test the new version of OverflowCounter, write a class CounterUser, that uses an overflow counter. <br>
It has an OverflowCounter as a data member and it implements the observer interface. <br>
To keep the test class as simple as possible only the following member functions are necessary:<br>
• Constructor where the limited counter is initialized with a limit value (5 for example).
In the constructor body CounterUser object (“this”) is set as the observer of the OverflowCounter.<br>
• ***IncrementBy***, where counter is incremented n times, where n is passed as a parameter.<br>
• ***HandleLimitReached()*** that displays that the limit has been reached.
Use the following test program where CounterUser object is declared, member function IncrementBy is called (with parameter value 12). <br>
When you run the program, you should see the message “Limit reached” twice from the first counter user, because limit is 5 and number of increments is 12) and once from the second.
```c++
int main(){
CounterUser cu(5);
cu.IncrementBy(12); //OUTPUT: two times "Limit has been reached"
CounterUser cu2(9);
cu2.IncrementBy(9);
cout << "Just passing time" << endl;
cu2.IncrementBy(1); //OUTPUT: "Limit has been reached"
}
```
## [Excercise 11](Assignment11Extra) Extra (Advanced version)
Amend your Counter class by adding a member function to set Observer. <br>
The implementations should use a vector to store pointers to counter observers and when limit is reached or overflow occurs the counter passes a pointer to itself as a parameter to the observer. <br>
The observer then prints notification and the current counter value.
```c++
class Counter {
public:
virtual void inc() = 0;
virtual void dec() = 0;
virtual void SetObserver(CounterObserver *) = 0;
virtual operator int() = 0;
virtual ~Counter() {};
};
class CounterObserver {
public:
virtual void HandleLimitReached(Counter *ctr) = 0;
};
```
Write a test program that creates two counters of both types and three observers. 
Two observers to monitor a single counter each and one that monitors both.<br>
Test your objects with UseCounter function from exercise 10. <br>
Write a set of tests to verify that your counters and observers work correctly.

## [Excercise 12](Assignment12) Exceptions
Modify and improve the random number generator from the lecture slides (lecture7, page 27) to create a lotto number generator:<br>
Constructor takes two parameters that determine the range of numbers that the generator produces. <br>
The parameters are: upper and lower limit of the range. 
Both values are included in the range. <br>
For example: lower = 2, upper = 6 can produce following random numbers: 2, 3, 4, 5, 6.<br>
The example generator used in the slides gets stuck in an infinite loop if all numbers in the range have already been used. <br>
Improve the generator so that it throws runtime_error if all numbers in the range have already been used.<br>
Write a test program to test your random number generator. <br>
Function test_generator tries to generate requested number of unique random numbers. <br>
Function catches exceptions and prints a message if an exception occurs. 
Finally the program prints the generated random numbers.
```c++
void test_generator(UniqueRng ur, int count)
int main(void) {
UniqueRng randGen(5, 13);
test_generator(randGen, 6);
test_generator(randGen, 9);
test_generator(randGen, 13);
UniqueRng randGen2(1, 35);
test_generator(randGen2, 7);
test_generator(randGen2, 7);
test_generator(randGen2, 7);
test_generator(randGen2, 70);
}
```
Example output (partial):<br>
Generating numbers:<br>
7<br>
10<br>
11<br>
6<br>
13<br>
9<br>
End of generator<br>
Generating numbers:<br>
9<br>
6<br>
10<br>
8<br>
13<br>
12<br>
5<br>
7<br>
11<br>
End of generator<br>
Generating numbers:<br>
Exception: Unable to produce unique random number Tried to generate 13 random numbers. Got only 9<br>
8<br>
7<br>
9<br>
13<br>
5<br>
6<br>
11<br>
10<br>
12<br>
End of generator<br>

## [Excercise 13](Assignment13) Smart pointers and pointer containers,
Example program car_sales.cpp has a large number of memory leaks. <br>
Your task is to fix the memory leaks. Replace all raw pointers with smart pointers (shared_ptr / weak_ptr) so that there is no need to call delete anywhere in the program.<br>
Modify class Website in the following way:<br>
• Delete remove() member function from the class<br>
• Modify print() so that it deletes automatically all sold cars before printing the list of
advertised cars
#Extra excercise
Add a (smart) pointer to Dealer in class Car so that when car information is printed the dealer name is also printed. <br>
Note that this creates circular reference!