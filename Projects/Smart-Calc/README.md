# Smart Calculator

A simple command-line calculator written in C as part of my C programming learning journey.

## Features

* Perform basic arithmetic operations:
  - Addition (`+`)
  - Subtraction (`-`)
  - Multiplication (`*`)
  - Division (`/`)
* Validates the selected operation.
* Validates numeric input.
* Prevents division by zero.
* Allows multiple calculations until the user chooses to exit.

## How to Compile

Using GCC:

```bash
gcc calculator.c -o calculator
```

## How to Run

```bash
./calculator
```

## Example

```text
Welcome to Smart Calculator

Choose Your operation (+,-,*,/): *
Your Operation is: *

Enter Number One: 10
Enter Number Two: 5

Your answer is 50.00

Do you wish to continue (y/n): y
```

## Concepts Practiced

* Functions
* `switch` statements
* `while` loops
* User input with `scanf()`
* Input validation
* Basic error handling

---

This project was built for learning purposes while working through C programming fundamentals.
