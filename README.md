# c-programming-journey
From basic code to better logic, one step at a time.
# 16 - Modular Addition in C

## Project Structure

```text
16-modular-addition/
│
├── main.c      # Main function and program execution
├── helper.c    # Implementation of the Addition() function
└── helper.h    # Function declaration and header file protection
```

## About the Project

This project demonstrates how to organize a C program by splitting it into three separate files: a main source file, a helper source file, and a header file.

All three files work together as **one complete C program**. The code is separated into different files to improve readability, maintainability, and code reusability.

## File Description

### 1. `main.c` — Main Function

- Contains the `main()` function, which is the entry point of the program.
- Handles the main program flow.
- Takes input from the user and displays the result.
- Uses the declaration provided by `helper.h` to call the `Addition()` function.

### 2. `helper.c` — Helper Function

- Contains the actual implementation of the `Addition()` function.
- Performs the addition of two integers.
- Returns the calculated result to the calling function.
- Keeps the calculation logic separate from the main program.

### 3. `helper.h` — Header File

- Contains the function declaration (prototype) of `Addition()`.
- Allows `main.c` and other source files to know how to call the function.
- Can include header guards to prevent the same header from being processed multiple times within a translation unit.
- Makes the function easier to reuse in other programs.

## Why Split One Program into Three Files?

Although these three files form one complete program, separating them has several advantages:

- **Code reusability:** The `Addition()` function can be reused in other programs.
- **Better organization:** Each file has a clear responsibility.
- **Maintainability:** Changes to the calculation logic can be made in `helper.c` without unnecessarily modifying `main.c`.
- **Readability:** Smaller, well-organized files are easier to understand.
- **Scalability:** More helper functions and modules can be added as the project grows.

## My Coding Philosophy

**BASIC > ADVANCED**

Every new version of my code should be better than the previous one. I focus on improving fundamentals, writing cleaner code, using meaningful comments, and following better programming practices.

The goal is not just to make the program work, but to understand how to make it more organized, reusable, and maintainable.

## Key Learning

A single C program does not have to be written in one file. By separating the main function, function implementation, and function declaration, we can build a more modular and maintainable program.

**Three files. One complete program. Better coding practices.**
