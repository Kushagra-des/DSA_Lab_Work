# Data Structures & Algorithms Laboratory in C

A structured collection of C programming laboratory exercises covering fundamental programming, linear data structures, non-linear data structures, graph algorithms, and classic algorithmic techniques.

## Overview

This repository contains **12 laboratory modules** with individual question files and supporting artifacts. The work progresses from C fundamentals and arrays to linked lists, stacks, queues, trees, graphs, and minimum spanning tree algorithms.

The repository is primarily written in **C** and is suitable as an academic Data Structures and Algorithms portfolio demonstrating hands-on implementation of core concepts.

## Features

- C implementations of common data structures and algorithms
- Array and string manipulation
- Searching and sorting algorithms
- Dynamic memory and linked lists
- Stack and queue implementations
- Expression conversion/evaluation
- Binary Search Trees
- Graph representation and traversal
- Kruskal and Prim Minimum Spanning Tree algorithms
- Separate README documentation for every laboratory module
- Original supporting artifacts retained where source code was not supplied

## Concepts / Technologies

- C (C11-compatible)
- Standard C Library (`stdio.h`, `stdlib.h`, `string.h`, `ctype.h`, `limits.h`, etc.)
- Arrays and strings
- Structures and pointers
- Dynamic memory allocation
- Recursion
- Searching and sorting
- Linked lists
- Stacks and queues
- Binary Search Trees
- Graphs, BFS and DFS
- Minimum Spanning Trees

## Project Structure

```text
data-structures-algorithms-lab-portfolio/
├── README.md
├── Lab 1/
│   ├── README.md
│   └── Q1.c ... Q12.c
├── Lab 2/
│   ├── README.md
│   └── Q1.c ... Q10.c
├── Lab 3/
│   ├── README.md
│   └── Q1.c ... Q5.c
├── Lab 4/
│   ├── README.md
│   └── Q1.png ... Q4.png
├── Lab 5/
│   ├── README.md
│   └── Q1.odt
├── Lab 6/
│   ├── README.md
│   ├── Q1.c ... Q10.c
│   └── rdm.h
├── Lab 7/
│   ├── README.md
│   └── Q1.c ... Q6.c
├── Lab 8/
│   ├── README.md
│   └── Q9.c ... Q12.c
├── Lab 9/
│   ├── README.md
│   └── Q1.c ... Q7.c
├── Lab 10/
│   ├── README.md
│   └── Q1.c ... Q4.c
├── Lab 11/
│   ├── README.md
│   └── Q1.c ... Q6.c
└── Lab 12/
    ├── README.md
    └── Q1.c ... Q5.c
```

## Installation

Install a C compiler such as GCC.

### GCC

Linux/macOS:

```bash
gcc --version
```

Windows with MinGW-w64:

```powershell
gcc --version
```

No external C libraries are required for the standard exercises.

## How to Run

Compile an individual program:

```bash
gcc -std=c11 -Wall -Wextra "Lab 7/Q4.c" -o lab7_q4
```

Run it on Linux/macOS:

```bash
./lab7_q4
```

Run it on Windows:

```powershell
.\lab7_q4.exe
```

For `Lab 2/Q5.c`, link the math library on GCC-based systems:

```bash
gcc -std=c11 -Wall -Wextra "Lab 2/Q5.c" -o lab2_q5 -lm
```

## Example Usage

Example: compile and run the Tower of Hanoi exercise:

```bash
gcc -std=c11 -Wall -Wextra "Lab 9/Q7.c" -o hanoi
./hanoi
```

Example output:

```text
Enter number of disks: 3
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
...
```

## Learning Progression

| Labs | Main Focus |
|---|---|
| 1–3 | C fundamentals, arrays, strings, searching |
| 4–5 | Problem-solving practice and binary search |
| 6 | Sorting algorithms |
| 7–8 | Linked lists |
| 9 | Stacks, expression processing, recursion |
| 10 | Queues |
| 11 | Binary Search Trees |
| 12 | Graphs and MST algorithms |

## Code Quality Notes

The project is primarily an academic implementation collection rather than a production library. Several programs intentionally use fixed-size arrays, global state, hard-coded demonstration data, or minimal input validation to keep individual laboratory concepts easy to study.

A technical review identified a small number of issues worth addressing before presenting the repository as a polished production-quality portfolio. The most important examples include a missing `-lm` linker requirement in Lab 2 Q5, an unsafe `sprintf` usage in Lab 9 Q3, incomplete memory cleanup in several tree/graph exercises, and assumptions in the MST implementations.

## Build & Validation

The C source files were checked with GCC using:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic
```

Most source files compile successfully. The known compile-time issue is `Lab 2/Q5.c`, which requires linking against the math library (`-lm`). Warnings were also observed for unused variables in a few files and a potential buffer-overflow warning in `Lab 9/Q3.c`.

## Repository Scope

This repository is best presented as a **Data Structures & Algorithms laboratory portfolio in C**. It demonstrates breadth of implementation and progression through core DSA concepts rather than a single end-user application.
