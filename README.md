# s3-oops-lab
- ### CYCLE 1
1. A phone number, such as (212) 767-8900, can be thought of as having
three parts: the area code (212), the exchange (767), and the number
(8900). Write a C++ program that uses a structure to store these three
parts of a phone number separately. Call the structure phone. Create two
structure variables of type phone. Initialize one, and have the user input a
number for the other one. Then display both numbers. The interchange
might look like this:
Enter your area code, exchange, and number: 415 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212

2. Define a class Date that contains details like year, month and date. Write
a C++ program to check the validity of the date that you enter and display
the next date.
Sample 1 : 02/ 03/ 1990
Valid, Next date: 03/03/1990
Sample 2: 29/02/1989
Not Valid

3. Define a class to represent bank account. Include members like name of
depositor, account no, Type of account, balance amount in the account.
Write C++ program with member functions to a) Assign initial values b)
To deposit an account c) To withdraw an amount after checking the
balance
d) To display name and balance
4. Write a class which represents the shape triangle. The member functions
should a) Check the validity of the triangle b) display the sides c) find the
area and display it.

- ### CYCLE 2
1. Write class which contains an integer array and a static function to find
the average of that array and other necessary member functions. Create
THREE objects. Read the values into the array using one object, and find
the average. Let the second object modifies the value by multiplying each
element by a certain multiplier. Repeat the process of finding the average
usng first object.Using the third object arrange the numbers in ascending
order and print,
2. Write a program to find shortest distance between three coordinates points,
representing vertices of a triangle, using inline function. Also check the
validity of the sides to make a triangle.
3. Write a function called swap() that interchanges two int values belonging
to an object, passed as parameter to it by the calling program. Write a C++
program to demonstrate call by value, call by reference and call by
address.
4. Write a function called power() that takes a double value for n and an int
value for p, and returns the result as a double value. Create a series of
overloaded functions with the same name that, in addition to double, also
work with types char, int, long, and float. Write a main() program that
exercises these overloaded functions with all argument types.

- ### CYCLE 3
1. Define a class Date. Overload the operator &#39;+&#39; such that it adds a given date with certain
number of days.
2. Distance is measured in feet and inches unit. Use operator overloading for &#39;+&#39; operator
for adding two such distances and &#39;&lt;&#39; for comparing two such distances. (one of the
operator function should be implemented as friend function.)
3. Write a program using operator overloading to overload Stream operators (&lt;&lt; and &gt;&gt;)
to read and display the objects of complex class.
4. A class representing distance is measured in the unit of feet and inches. Write a
program to do conversion from meter unit to objects of class type and objects of class type
to meter.
5. Polar coordinates are represented in angle and radius format while rectangular
coordinates represented as (x,y). Define classes for both types and include member
functions to convert from polar to rectangular coordinates.(conversion from class to class.)
6. Employee class contain details like name,emp no,pay rate, constructor function and a
pay() function. Manager class inherits from employee and has the option of drawing pay
on hourly basis or salary basis and has an additional data issalaried(bool). Class
Supervisor is derived from employee and has an additional field department and is
always salaried. Base and both derived classes should contain pay() function with same
name.

7. Write a C++ program to create a class STUDENT with age name and register number.
Using Inheritance, derive two classes MTech-stud and BTech-stud.List both the category
of students in the increasing order of marks( for BTech-stud) and gpa( for MTech-stud). In
case of tie, display whichever name comes first. Make sort() function as a virtual function.

8. Implement the base class Shape and derive triangle,rectangle,circle and square classes
from it. Implement functions to compute the area and perimeter of the polygon. Use the
concept of pure virtual functions.
