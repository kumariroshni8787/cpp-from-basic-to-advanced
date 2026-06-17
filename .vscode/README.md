# Day 1: Flowchart, Pseudocode & C++ Installation

## 📌 What I Learned Today

- Introduction to problem-solving
- Flowcharts
- Pseudocode
- Installing C++ development environment

---

# 1. Flowchart

## What is a Flowchart?

A flowchart is a graphical representation of an algorithm or process.

It uses different symbols to show the sequence of steps required to solve a problem.

### Why Use Flowcharts?

- Easy to understand
- Helps visualize logic
- Makes debugging easier
- Useful before writing actual code

---

## Common Flowchart Symbols

| Symbol | Meaning |
|----------|----------|
| Oval | Start / End |
| Rectangle | Process |
| Parallelogram | Input / Output |
| Diamond | Decision |
| Arrow | Flow Direction |

---

## Example: Check if a Number is Positive

Flow:

Start → Input Number → Check Number > 0 → Print Result → End

```
Start
  |
Input Number
  |
Number > 0 ?
 /      \
Yes      No
 |         |
Print     Print
Positive  Not Positive
 |         |
   End
```

---

# 2. Pseudocode

## What is Pseudocode?

Pseudocode is an informal way of writing program logic using simple English statements.

It is not actual code and does not follow strict programming syntax.

### Why Use Pseudocode?

- Easy to write
- Easy to understand
- Helps plan the solution
- Can be converted into any programming language

---

## Example: Add Two Numbers

### Pseudocode

```
START

INPUT A
INPUT B

SUM = A + B

PRINT SUM

END
```

---

## Example: Find Largest Number

### Pseudocode

```
START

INPUT A
INPUT B

IF A > B
    PRINT A
ELSE
    PRINT B

END
```

---

# 3. C++ Installation

## Windows Installation

### Step 1: Install VS Code

Download and install Visual Studio Code.

### Step 2: Install MinGW Compiler

Download MinGW and install GCC/G++ compiler.

### Step 3: Configure Environment Variables

Add MinGW bin folder path to system environment variables.

### Step 4: Verify Installation

Open terminal and run:

```bash
g++ --version
```

If version information appears, installation is successful.

---

## First C++ Program

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World";

    return 0;
}
```

### Output

```
Hello World
```

---

# Key Differences

| Flowchart | Pseudocode |
|------------|------------|
| Graphical Representation | Text Representation |
| Easy Visualization | Easy Writing |
| Uses Symbols | Uses English Statements |
| More Time to Create | Faster to Create |

---

# Practice Questions

1. Create a flowchart to find the largest of two numbers.
2. Write pseudocode for finding the sum of three numbers.
3. Install C++ compiler and run a Hello World program.

---

# Day 1 Completed ✅

Topics Covered:
- Flowchart
- Pseudocode
- C++ Installation
- First C++ Program

📖 Day 1 Summary

Today I learned the basics of problem-solving using Flowcharts and Pseudocode. Flowcharts help visualize the solution using symbols, while pseudocode helps write logic in simple English before coding. I also installed the C++ development environment and executed my first C++ program, Hello World.


# Day 2: Variables, Data Types, and Operators

## Introduction

In C++, variables are used to store data, data types define the type of data a variable can hold, and operators are used to perform operations on data.

---

## 1. Variables

A variable is a named memory location used to store data.

### Syntax

```cpp
data_type variable_name;
```

### Example

```cpp
int age = 20;
float salary = 25000.50;
char grade = 'A';
```

### Rules for Naming Variables

* Variable names can contain letters, digits, and underscores (`_`).
* Variable names cannot start with a digit.
* Spaces are not allowed.
* C++ keywords cannot be used as variable names.

### Valid Examples

```cpp
int age;
float total_marks;
string studentName;
```

### Invalid Examples

```cpp
int 1age;      // Starts with digit
int my age;    // Contains space
int int;       // Keyword
```

---

## 2. Data Types

Data types specify the type of value a variable can store.

### Basic Data Types

| Data Type | Description                 | Example  |
| --------- | --------------------------- | -------- |
| int       | Stores integers             | 10       |
| float     | Stores decimal numbers      | 10.5     |
| double    | Stores large decimal values | 10.56789 |
| char      | Stores a single character   | 'A'      |
| bool      | Stores true or false        | true     |
| string    | Stores text                 | "Hello"  |

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float marks = 89.5;
    char grade = 'A';
    bool passed = true;
    string name = "John";

    return 0;
}
```

---

## 3. Operators

Operators are symbols used to perform operations on variables and values.

### Arithmetic Operators

| Operator | Meaning             |
| -------- | ------------------- |
| +        | Addition            |
| -        | Subtraction         |
| *        | Multiplication      |
| /        | Division            |
| %        | Modulus (Remainder) |

### Example

```cpp
int a = 10, b = 3;

cout << a + b << endl;
cout << a - b << endl;
cout << a * b << endl;
cout << a / b << endl;
cout << a % b << endl;
```

---

### Relational Operators

Used to compare values.

| Operator | Meaning                  |
| -------- | ------------------------ |
| ==       | Equal to                 |
| !=       | Not equal to             |
| >        | Greater than             |
| <        | Less than                |
| >=       | Greater than or equal to |
| <=       | Less than or equal to    |

### Example

```cpp
int a = 10;
int b = 20;

cout << (a < b);
```

---

### Logical Operators

Used to combine conditions.

| Operator | Meaning     |
| -------- | ----------- |
| &&       | Logical AND |
| ||       | Logical OR  |
| !        | Logical NOT |

### Example

```cpp
bool x = true;
bool y = false;

cout << (x && y);
cout << (x || y);
cout << (!x);
```

---

## Key Takeaways

* Variables store data in memory.
* Data types define what kind of data can be stored.
* Operators perform calculations and comparisons.
* Understanding these concepts is essential before learning control statements, loops, and functions.

---

## Practice Questions

1. Create variables for your name, age, and marks.
2. Perform arithmetic operations on two numbers.
3. Compare two integers using relational operators.
4. Use logical operators with different boolean values.

---

## Conclusion

Variables, data types, and operators form the foundation of C++ programming. These concepts will be used throughout Data Structures and Algorithms and are essential for writing efficient programs.

📌 Day 2 Summary
Learned what variables are and how they store data.
Studied basic C++ data types such as int, float, char, bool, and string.
Learned arithmetic, relational, and logical operators.
Practiced performing calculations and comparisons using operators.


# Day 3: Control Flow in C++

Today I learned about controlling the flow of a C++ program using decision-making statements and loops.

## 1. If-Else Statement

The `if-else` statement is used to make decisions in a program.

It checks a condition:

* If the condition is true → execute the `if` block
* If the condition is false → execute the `else` block

### Syntax

```cpp
if (condition) {
    // code runs when condition is true
}
else {
    // code runs when condition is false
}
```

### Example

```cpp
#include <iostream>
using namespace std;

int main() {

    int age = 18;

    if (age >= 18) {
        cout << "You can vote";
    }
    else {
        cout << "You cannot vote";
    }

    return 0;
}
```

Output:

```
You can vote
```

---

# 2. Loops in C++

Loops are used to execute a block of code repeatedly until a condition becomes false.

C++ provides different types of loops:

* `for` loop
* `while` loop
* `do-while` loop

---

## For Loop

A `for` loop is used when we know how many times we want to repeat a task.

### Syntax

```cpp
for(initialization; condition; update) {
    // code
}
```

### Example

```cpp
#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    return 0;
}
```

Output:

```
1
2
3
4
5
```

---

## While Loop

A `while` loop runs as long as the condition is true.

### Syntax

```cpp
while(condition) {
    // code
}
```

### Example

```cpp
int i = 1;

while(i <= 5) {
    cout << i << endl;
    i++;
}
```

Output:

```
1
2
3
4
5
```

---

## Do-While Loop

A `do-while` loop executes the code at least one time before checking the condition.

### Syntax

```cpp
do {
    // code
}
while(condition);
```

Example:

```cpp
int i = 1;

do {
    cout << i << endl;
    i++;
}
while(i <= 5);
```

---

# 3. Break Keyword

The `break` keyword is used to immediately stop a loop.

When `break` executes, the loop ends and control moves outside the loop.

### Example

```cpp
#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 10; i++) {

        if(i == 5) {
            break;
        }

        cout << i << endl;
    }

    return 0;
}
```

Output:

```
1
2
3
4
```

The loop stopped when `i` became 5.

---

# 4. Nested Loop

A nested loop means a loop inside another loop.

The inner loop runs completely for every single iteration of the outer loop.

### Syntax

```cpp
for(initialization; condition; update) {

    for(initialization; condition; update) {

        // code

    }
}
```

### Example: Printing a Pattern

```cpp
#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 3; i++) {

        for(int j = 1; j <= 3; j++) {

            cout << "* ";

        }

        cout << endl;
    }

    return 0;
}
```

Output:

```
* * *
* * *
* * *
```

---

# Key Learning Points

* `if-else` is used for decision making.
* Loops reduce repeated code.
* `for` loop is useful when the number of iterations is known.
* `while` loop is used when the condition controls repetition.
* `break` stops the loop immediately.
* Nested loops are used for patterns and matrix-related problems.

---

# Practice Ideas

* Check whether a number is positive or negative.
* Print numbers from 1 to 100 using loops.
* Create multiplication tables.
* Print different star patterns using nested loops.

Day 3 Summary

Today I learned how to control the execution flow of a C++ program.
I practiced decision-making using if-else, repetition using loops, stopping loops with break, and creating patterns using nested loops.