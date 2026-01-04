---
id: module_1_notes
aliases: []
tags: []
---

# Module 1 C++ Fundamentals
- Simply stated, to be a professional programmer implies competency in C++.
## Critical Skill 1.1: A Brief History of C++
- C++ is a superset of C.
- C++ expanded and enhanced the C language to support object-oriented programming.
### C: The Beginning of the Modern Age of Programming
- C was invented and first implemented by Dennis Ritchie on a DEC PDP-11 using the UNIX operating system.
- BCPL -> B -> C.
- Structured languages addressed the problem "spaghetti code" by adding well-defined control statements, subroutines with local variables, and other improvements.
### The Need for C++
- Since C was a successful computer programming language, why was there a need for something else?
  - The answer is complexity:
    - Throughout history of programming, the increasing complexity of programs has driven the need for better ways to manage that complexity --> C++ is a response to that need.
### C++ Is Born
- C++ was invented by Bjarne Stroustrup in 1979, at Bell Laboratories in Murray Hill, New Jersey.
### The Evolution of C++
- The version of C++ we use in this book is known as the *Standard C++*.
## Critical Skill 1.2: How C++ Relates to Java and C#
- The main different between C++, Java, and C# is the type of computing environment for which each is designed.
  - C++ was created to produce high-performance programs for a specific type of CPU and operating system.
### Ask the Expert
Q: How do Java and C# create cross-platform, portable programs, and why can't C++ do the same?
A: Java and C# can create cross-platform, portable programs and C++ can't because of the type of object code produced by the compiler.
### Progress Check
1. From what language is C++ derived?
A: C
2. What was the main factor that drive the creation of C++?
A: The complexity of programs grew?
3. C++ is the parent of Java and C#. True or False?
A: True
## Critical Skill 1.3: Object-Oriented Programming
- Central to C++ is object-oriented programming (OOP).
  - OOP was the impetus for the creation of C++.
- All OOP languages have three traits in common: encapsulation, polymorphism, and inheritance.
### Encapsulation
- Encapsulation is a programming mechanism that binds together code and the data it manipulates, and that keeps both safe from outside interference and misuse.
- Objects are instances of a class.
- The code and data that constitute a class are called members of the class. Specifically, member variables, also called instance variables, are the data defined by the class. Member functions are the code that operates on the data.
### Polymorphism
- Polymorphism is the quality that allows one interface to access a general class of actions.
### Inheritance
- Inheritance is the process by which one object can acquire the properties of another object.
### Progress Check
1. Name the principles of OOP.
A: Polymorphism
   Inheritance
   Encapsulation
2. What is the basic unit of encapsulation in C++?
A: ~~Code is bound to the data that it defines.~~ Classes
3. What is the commonly used term for a subroutine in C++?
A: Function.
### Ask the Expert
- A key point to understand about C++ is that it allows you to write object-oriented programs, but does not require you to do so.
  - This is one of the important differences between C++ and Java/C#, which employ a strict object-model.
- The object-oriented features of C++ are transparent at runtime, so little (if any) overhead is incurred.
## Critical Skill 1.4: A First Simple Program
- Source code is the human-readable form of the program -- it is stored in a text file.
- Object code is the executable form of the program created by the compiler.
### Entering the Program
- C++ programs are normally contained in files that use the file extension `.cpp`.
  - Thus, you can call a C++ program file by any name, but it should use the `.cpp` extension.
### Compiling the Program
### Run the Program
### The First Sample Program Line by Line
- The contents of a comment are ignored by the compiler.
- A header is included in your program using the `#include` directive.
- A namespace creates a declarative region in which various programs elements can be placed.
- Namespaces help in the organization of large programs.
- `std` is the namespace in which the entire Standard C++ library is declared.
- The only function that any C++ program must include is `main()`.
- The `main()` function is where program execution begins and (most commonly) ends.
- `cout` is a predefined identifier that stands for console output and generally refers to the computer's screen.
- All C++ statements end with a semicolon.
- In C++, a string is a sequence of characters enclosed between double quotes.
- `return 0;` in main returns 0 to the calling process (which is typically the operating system).
- For most operating systems, a return value of 0 signifies that the program is terminating normally.
### Handling Syntax Errors
- When you receive syntax error messages, be prepared to look at the last few lines of code in your program in order to find the error.
### Ask the Expert
- Warnings point out suspicious but technically correct code.
### Progress Check
1. Where does a C++ program begin execution?
A: The `main` function.
2. What is `cout`?
`cout` is a predefined identifier which refers to "console output" which typically refers to the monitor.
3. What does `#include <iostream>` do?
This directive includes the C++ I/O standard library into our program.
## Critical Skill 1.5: A Second Simple Program
- A variable is a named memory location that can be assigned a value.
- In C++, all variables must be declared before they are used.
- `<<` refers to stream insertion operator or the C++ output operator.
## Critical Skill 1.6: Using an Operator
### Progress Check
1. Must a variable be declared before it is used?
A: Yes
2. Show how to assign the variable min the value 0.
A:
```c
int min;
min = 0;
```
3. Can more than one variable be declared in a single declaration statement?
A: Yes
## Critical Skill 1.7: Reading Input from the Keyboard
- `>>` is the C++ input operator.
- `cin` is another predefined identifier. It stands for console input.
- For `cin` if the user enters in a non-integer response for an integer variable the value will default to 0.
### Some Output Options
- In general, you can chain together as many output operations as you like within one output statement.
- In C++, the carriage return-linefeed sequence is generated using the newline character.
### Progress Check
1. What is C++'s input operator?
A: `>>`
2. To what device is `cin` linked by default?
A: The keyboard
3. What does `\n` stand for?
A: The newline character
### Another Data Type
### Ask the Expert
- C++ supplies different data types so that you can write efficient programs.
  - For example, integer arithmetic is faster than floating-point calculations.
### Project 1-1
- [x] Project 1-1 Converting Feet to Meters
### Progress Check
1. What is C++'s keyword for the integer data type?
A: `int`
2. What is double?
A: A `double` is a type in C++ that stores double precision numbers.
3. How do you output a newline?
```c
cout << '\n';
```
## Critical Skill 1.8: Two Control Statements
- Inside a function, execution proceeds from one statement to the next, top to bottom.
### The if Statement
- IF statement's simplest form:
```c
if(condition) statement;
```
  - where condition is an expression that is evaluated to be either true or false.
    - In C++, true is nonzero and false is zero.
### The for Loop
- You can repeatedly execute a sequence of code by creating a loop.
- The simplest form of the for loop is:
```c
for (initialization; condition; increment) statement;
```
- Initialization sets a loop control variable to an initial value.
- Condition is an expression that is tested each time the loop repeats.
- The increment is an expression that determines how the loop control variable is incremented each time the loop repeats.
- In C++ we wont used `count=count+1` because there is a special increment operator that performs this operation more efficiently: The increment operator `++`.
### Progress Check
1. What does the `if` statement do?
A: The `if` statement provides control over the program's execution.
2. What does the `for` statement do?
A: The `for` loop provides a way to repeatedly executing code.
3. What are C++'s relational operators?
A: Relational operators in C++ are used to give a truth value of true or false.
## Critical Skill 1.9: Using Blocks of Code
- A code black is a grouping of two or more statements.
- Once a block of code has been created, it becomes a logical unit that can be used any place that a single statement can.
- The main reason for blocks of code is to create logically inseparable units of code.
### Ask the Expert
Q: Does the use of a code block introduce any runtime inefficiencies? In other words, do the { and } consume any extra time during the execution of my program?
A: No, Code blocks do not add any overhead whatsoever. In fact, because of their ability to simplify the coding of certain algorithms, their use generally increases speed and efficiency.
### Semicolons and Positioning
- In C++, the semicolon signals the end of a statement.
  - That is, each individual statement must end with a semicolon.
- Breaking long lines is often used to make programs more readable. It can also prevent excessively long lines from wrapping.
### Indentation Practices
### Project 1-2
- [x] Project 1-2 Generating a Table of Feet to Meter Conversions
## Critical Skill 1.10: Introducing Functions
- A C++ program is constructed from building blocks called functions.
- A Function is a subroutine that contains one or more C++ statements
- Each function has a name, and this name is used to call the function.
- To call a function, simply specify its name in the source code of your program, followed by parentheses.
- When a function is called, program control is transferred to that function, and the code contained within the function is executed.
- When the function's code ends, control is transferred back to the caller.
- Argument list will refer to comma-separated arguments.
- An argument is a value passed into a function.
- A return value is data that is passed back to the calling code.
- Whenever you use a built-in function, you must include its header.
### The C++ Libraries
### Progress Check
1. What is a function?
A: A function is a subroutine that contains one or more C++ statements.
2. A function is called by using its name. True of false?
A: True.
3. What is the C++ standard function library?
A: The C++ standard function library is a collection of functions supplied by all C++ compilers.
## Critical Skill 1.11: The C++ Keywords
- There are 63 keywords defined for Standard C++.
- C++ is a case-sensitive language, and it requires that all keywords be in lowercase.
## Critical Skill 1.12: Identifiers
- In C++, an identifier is a name assigned to a function, variable, or any other user-defined item.
- You cannot use any of the C++ keywords as identifier names.
### Progress Check
1. Which is the keyword, for, For, or FOR?
A: for
2. A C++ identifier can contain what type of characters?
A: underscore, digits, letters.
3. Are index21 and Index21 the same identifier?
A: No.
## Module 1 Mastery Check
1. It has been said that C++ sits at the center of the modern programming universe. Explain this statement.
A: C++ sits at the core from inheriting from one of the most influential programming languages C and including modern concepts for programming which is OOP.
2. A C++ compiler produces object code that is directly executed by the computer. True or false?
A: True
3. What are the tree main principles of object-oriented programming?
A: P(olymoprhism) I(nheritance) E(ncapsulation).
4. Where do C++ program begin execution?
A: The `main` function.
5. What is a header?
A: A header is a directive used to import useful pre-existing C++ code.
Alt A: A header contains information used by the program.
6. What is `<iostream>`? What does the following code do: `#include <iostream>`?
A: `<iostream>` is from the standard C++ library code used for input and output. And the following code imports the library using the `#include` directive.
Alt A: `<iostream>` is the header that supports I/O. The statement includes the `<iostream>` header in a program.
7. What is a namespace?
A: A namespace is a declarative region where code exists.
Alt A: A namespace is a declarative region in which various program elements can be placed. Elements declared in one namespace are separate from elements declared in another.
8. What is a variable?
A: A variable is named memory location to store data.
9. Which of the following variable names is/are invalid?
  a. count
  b. _count
  c. count27
  d. 67count
  e. if
A: (d) and (e) are invalid.
10. How do you create single-line comment? How do you create a multiline comment?
A: `//` for single-line comments and `/**/` for multi-line comments.
11. Show the general form of the if statement. Show the general form of the for loop.
A:
```c
if (condition) {
  statements;
}
```
```c
for (initialization; condition; increment) {
  statements;
}
```
12. How do you create a block of code?
A: Using `{}`.
13. See EtoMWeight.cpp
14. See JtoEYears.cpp
15. When a function is called, what happens to program control?
A: The program control goes to the called function and when that is finished executing the program control flow goes back to the caller.
16. See abs5.cpp -- Whoops I misread it. Need TODO
