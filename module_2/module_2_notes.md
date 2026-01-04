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
- 
