---
id: module_2_notes
aliases: []
tags: []
---

# Module 2 Introducing Data Types and Operators
- At the core of a programming language are its data types and operators.
  - These elements define the limits of a language and determine the kind of tasks to which it can be applied.
### Why Data Types Are Important
- The data type of a variable is important because it determines the operations that are allowed and the range of values that can be stored.
- Because data types differ, all variables must be declared prior to their use, and a variable declaration always includes a type specifier.
- In C++ there is no concept of a "type-less" variable.
- Several of C++'s basic types are closely tied to the building blocks upon which the computer operates: bytes and words. This, C++ lets you operate on the same types of data as does the CPU itself.
## Critical Skill 2.1: The C++ Data Types
- C++ allows certain of the basic types to have modifiers preceding them.
  - A modifier alters the meaning of the base type so that it more precisely fits the needs of various situations.
- A C++ compiler is free to exceed one or more of the ranges for types, and most compilers do. Thus, the ranges of the  C++ data types are implementation dependent.
### Integers
- Integers hold quantities that don't require fractional components. They are often used for controlling loops and conditional statements, and for counting. Because they don't have fractional components, operations on int quantities are much faster than they are on floating-point types.
- By default, integers are signed.
- C++ allows a shorthand notation for declaring unsigned, short, or long integers.
### Characters
- Variables of type char hold 8-bit ASCII characters.
- The char type can be modified with signed or unsigned.
- Technically, whether char is signed or unsigned by default is implementation-defined.
  - However, for most compilers char is signed.
#### Progress Check
1. What are the seven basic types?
- A: char, int, float, double, wchar_t, bool, void.
2. What is the difference between signed and unsigned integers?
- A: Signed integers holds both negative and positive number but has a small range on the positive side and unsigned integers only hold positive numbers and has a greater range for positive numbers.
3. Can a char variable be used like a little integer?
- A: Yes.
#### Ask the Expert
- Why does C++ specify only minimum ranges for its built-in types rather than stating these precisely?
- A: By not specifying precise ranges, C++ allows each compiler to optimize the data types for the execution environment. Each C++ compiler specifies the range of the basic types in the header `<climits>`.
### Floating-Point Types
- Variables of the types float and double are employed either when a fractional component is required or when your application requires very large or small numbers.
- The long double type lets you work with very large or small numbers.
### The bool type
- One of the fundamental concepts in C++ is that any nonzero value is interpreted as true and zero is false.
  - This concept is fully compatible with the bool data type because when used in a Boolean expression, C++ automatically converts any nonzero value into true and converts zero into false. -- The reverse is also true.
- The outcome of a relational operator is a true/false value.
### void
- The void type specifies a valueless expression.
#### Progress Check
1. What is the primary difference between float and doable?
- A: The precision and the values they can store.
- Alt A: The primary difference between float and double is in the magnitude of values they can hold.
2. What values can a bool variable have? To what Boolean values does zero convert?
- A: 2 (true or false). To false.
3. What is void?
- A: A valueless expression.
#### Project 2-1
- [x] Project 2-1 Talking to Mars
## Critical Skill 2.2: Literals
- Literals refer to fixed, human-readable values that cannot be altered by the program.
- Literals are also commonly referred to as constants.
- The C++ compiler automatically makes certain assumptions about the type of a literal and you can also specify the type of a literal.
- By default, the C++ compiler fits an integer literal into the smallest compatible data type that will hold it, beginning with int.
  - It will not choose char because it means crossing type boundaries.
- By default, floating-point literals are assumed to be double.
### Hexadecimal and Octal Literals
### String Literals
- A string is a set of characters enclosed by double quotes.
- C++ does not have a built-in string data type. C++ does, however, provide a string type in its class library.
#### Ask the Expert
- A wide-character constant is preceded with the character L.
### Character Escape Sequences
- C++ provides the character escape sequences.
#### Ask the Expert
- Do not confuse strings with characters. They are not the same type!
#### Progress Check
1. By default, what is the type of the literal 10? What is the type of the literal 10.0?
- A: 10 is integer and 10.0 is double.
2. How do you specify 100 as a long int? How do you specify 100 as an unsigned int?
- A: 100L and 100U.
3. What is \b?
- A: \b is an escape sequence character that outputs a backspace.
## Critical Skill 2.3: A Closer Look at Variables
- Variables are declared using this form:
```c
type var-name;
```
- When you create a variable, you are creating an instance of its type.
  - The capabilities of a variable are determined by its type.
- Furthermore, the type of a variable cannot change during its lifetime.
### Initializing a Variable
- You can assign a value to a variable at the same time that it is declared.
  - This is called variable initialization.
- When declaring two or more variable of the same type using a comma separated list, you can give one or more of those variable an initial value:
```c
int a, b = 8, c = 19, d; // b and c have initializations
```
### Dynamic Initialization
- Initialization expression can use any element valid at the time of the initialization, including calls to functions, other variables, or literals.
### Operators
- An operator is a symbol that tells the compiler to perform a specific mathematical or logical manipulation.
- C++ has four general classes of operators: arithmetic, bitwise, relational, and logical.
## Critical Skill 2.4: Arithmetic Operators
- In C++, the `%` operator can be applied only to integer operands.
### Increment and Decrement
- Operators on the same precedence level are evaluated by the compiler from left to right.
  - Of course, parentheses may be used to alter the order of evaluation.
#### Ask the Expert
- The increment operator is in the "C++"!
## Critical Skill 2.5: Relational and Logical Operators
- Relational refers to the relationships that values can have with one another, and logical refers to the ways in which true and false values can be connected together.
  - They often work together.
- In C++, the outcome of a relational or logical expression produces a bool result.
  - That is, the outcome of a relational or logical expression is either true or false.
- Both relational and logical operators are lower in precedence than the arithmetic operators.
#### Project 2-2
- [ ] Project 2-2 Construct an XOR Logical Operation
