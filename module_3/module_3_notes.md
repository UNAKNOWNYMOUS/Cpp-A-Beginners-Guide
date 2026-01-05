---
id: module_3_notes
aliases: []
tags: []
---

# Module 3 Program Control Statements
- This module discusses the statements that control a program's flow of execution.
## Critical Skill 3.1: The if Statement
- The complete form of the if statement is:
```cpp
if (expression) statement;
else statement;
```
- The else clause is optional.
- The general form of if using block statements is:
```cpp
if (expression) {
  statement sequence
}
else {
  statement sequence
}
```
- The conditional expression controlling the if may be any type of valid C++ expression that produces a true or false result.
### The Conditional Expression
- A value of 0 is automatically converted into false, and all non-zero values are converted to true.
- So any expression that results in a 0 or non-zero value can be used to control the if.
### Nested ifs
### The if-else-if Ladder
- The if-else-if ladder looks like this:
```cpp
if (condition)
  statement;
else if (condition)
  statment;
else if (condition)
  statement;
.
.
.
else
  statement;
```
#### Progress Check
1. The condition controlling the if must use a relational operator. True or false?
2. To what if does an else always associate?
3. What is an if-else-if ladder?
