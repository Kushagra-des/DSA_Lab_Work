# C Programming Laboratory Exercises 1 - Fundamentals 

A structured collection of **12 C programming laboratory exercises** covering fundamental programming concepts, arrays, searching, sorting, strings, pointers, dynamic memory allocation, and structures.

## Overview

This repository contains **12 standalone C programs**, with each question focused on a specific programming concept or problem-solving technique.

The exercises progress from basic array and function-based problems to string manipulation, searching and sorting algorithms, dynamic memory allocation, pointers, and structure-based programming.

The repository is primarily written in **C** and is suitable as an academic programming laboratory collection and beginner-level C programming portfolio.

## Features

* 12 independent C programming exercises
* Array manipulation and traversal
* Linear search implementation
* Prime number checking
* Power calculation using functions
* Character and string manipulation
* String reversal
* Bubble sort implementation
* Substring searching
* Manual string concatenation using pointers
* Dynamic memory allocation using `malloc()` and `free()`
* Time difference calculation using structures
* Complex number operations using structures
* Practical implementation of core C programming concepts

## Concepts / Technologies

* C Programming
* C11-compatible syntax
* Standard C Library
* Variables and data types
* Conditional statements and loops
* Functions
* Arrays
* Strings and character arrays
* Pointers
* Dynamic memory allocation
* Structures
* Linear Search
* Bubble Sort
* String processing
* Modular arithmetic
* Basic problem-solving techniques

## Project Structure

```text
c-programming-laboratory/
├── README.md
├── Q1.c
├── Q2.c
├── Q3.c
├── Q4.c
├── Q5.c
├── Q6.c
├── Q7.c
├── Q8.c
├── Q9.c
├── Q10.c
├── Q11.c
└── Q12.c
```

Each `Q*.c` file is an **independent program** with its own `main()` function and should be compiled separately.

## File Overview

| File    | Main Topic             | Description                                                       |
| ------- | ---------------------- | ----------------------------------------------------------------- |
| `Q1.c`  | Arrays & Functions     | Finds the largest element in an integer array                     |
| `Q2.c`  | Linear Search          | Searches for an element in an integer array                       |
| `Q3.c`  | Functions & Logic      | Determines whether a number is prime                              |
| `Q4.c`  | Functions & Arithmetic | Calculates the power of a number without `pow()`                  |
| `Q5.c`  | Strings                | Replaces a specified character throughout a string                |
| `Q6.c`  | Strings                | Reverses the contents of a string                                 |
| `Q7.c`  | Sorting                | Sorts an array using Bubble Sort in ascending or descending order |
| `Q8.c`  | String Searching       | Searches for a specified word/substring in a sentence             |
| `Q9.c`  | Pointers & Strings     | Concatenates two strings without using `strcat()`                 |
| `Q10.c` | Dynamic Memory         | Dynamically allocates an array and performs linear search         |
| `Q11.c` | Structures             | Calculates the difference between two time values                 |
| `Q12.c` | Structures             | Adds two complex numbers using a structure                        |

## Installation

Install a C compiler such as **GCC**.

### GCC

Linux/macOS:

```bash
gcc --version
```

Windows with MinGW-w64:

```bash
gcc --version
```

No external libraries are required for these programs beyond the standard C library.

## How to Run

Compile an individual program:

```bash
gcc -std=c11 -Wall -Wextra Q1.c -o Q1
```

Run on Linux/macOS:

```bash
./Q1
```

Run on Windows:

```bash
.\Q1.exe
```

The same process can be followed for `Q2.c` through `Q12.c`.

### Example

Compile and run the sorting program:

```bash
gcc -std=c11 -Wall -Wextra Q7.c -o Q7
```

Linux/macOS:

```bash
./Q7
```

Windows:

```bash
.\Q7.exe
```

## Learning Progression

| Exercises | Main Focus                                                 |
| --------- | ---------------------------------------------------------- |
| Q1–Q4     | Arrays, functions, loops, conditions, and basic algorithms |
| Q5–Q6     | String and character manipulation                          |
| Q7        | Sorting algorithms                                         |
| Q8–Q9     | String searching and pointer-based string operations       |
| Q10       | Dynamic memory allocation and pointers                     |
| Q11–Q12   | Structures and structured data processing                  |

## Algorithms & Techniques

### Linear Search

Used in `Q2.c` and `Q10.c` to locate an element within an array.

**Time Complexity:** `O(n)`

### Bubble Sort

Used in `Q7.c` to arrange array elements in ascending or descending order.

**Worst-case Time Complexity:** `O(n²)`

### String Reversal

`Q6.c` reverses a string by swapping characters from opposite ends of the character array.

### Substring Search

`Q8.c` uses the standard C string library to determine whether a specified sequence of characters occurs within a sentence.

### Dynamic Memory Allocation

`Q10.c` demonstrates runtime memory allocation using:

```c
malloc()
free()
```

This provides practical exposure to dynamically sized arrays and memory management.

## Standard Library Usage

The programs make use of standard C headers where required, including:

```c
stdio.h
stdlib.h
string.h
stdbool.h
```

The exact headers vary according to the requirements of each individual program.

## Code Quality Notes

The programs are designed primarily for **academic learning and laboratory practice**, rather than production use.

The implementations intentionally keep individual concepts simple and easy to understand. As a result, some programs use fixed-size arrays, straightforward input handling, and minimal error validation.

For a production-quality implementation, additional considerations could include:

* More robust input validation
* Buffer-size validation
* Handling invalid input types
* Overflow checks for arithmetic operations
* Safer string manipulation
* More extensive edge-case handling
* Consistent error handling

## Build & Validation

The programs can be compiled using GCC with common warning flags:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic Q1.c -o Q1
```

The same compilation approach can be applied individually to all source files.

Since every source file contains its own `main()` function, **do not compile all 12 files together**.

## Repository Scope

This repository is best presented as a **C Programming Laboratory Portfolio** demonstrating practical implementation of fundamental programming concepts.

The exercises provide a progression from basic programming constructs to more advanced topics such as **pointers, dynamic memory allocation, string manipulation, searching, sorting, and structures**.

## Learning Objective

The primary objective of this repository is to strengthen:

* C programming fundamentals
* Algorithmic thinking
* Problem-solving skills
* Understanding of arrays and strings
* Function-based program design
* Pointer and memory management concepts
* Understanding and practical use of structures

---

**Language:** C
**Programs:** 12
**Level:** Beginner to Intermediate
**Purpose:** Academic / Laboratory Practice
