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
## Critical Skill 1.3 Object-Oriented Programming
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
- [ ] Project 1-1 Converting Feet to Meters
