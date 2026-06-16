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