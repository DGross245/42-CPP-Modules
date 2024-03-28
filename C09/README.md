# CPP Module 09

Welcome to Module 09 of the CPP Modules! This module serves as an introduction to C++ programming language basics.

## Topics Covered
- STL (Standard Template Library)

## Exercises
- **Exercise 00: Bitcoin Exchange**
  - Description: This program, btc, calculates the value of a specified amount of bitcoin on a given date using a provided database in CSV format. The database contains historical bitcoin prices over time.
    ```bash
    cd ex00
    make
    ```
    Run the program with an input file containing dates and corresponding values in the format "date | value":
    ```bash
    ./btc [input_file]
    ```

- **Exercise 01: Reverse Polish Notation**
  - Description: The program `RPN` evaluates an expression written in Reverse Polish Notation (RPN) and outputs the correct result.
  - Usage:
    ```bash
    cd ex01
    make
    ./RPN "[RPN expression]"
    ```
  **Example**
    - Using the program with various RPN expressions yields:

      ```bash
      ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
      42
      ./RPN "7 7 * 7 -"
      42
      ./RPN "1 2 * 2 / 2 * 2 4 - +"
      0
      ./RPN "(1 + 1)"
      Error
      ```

- **Exercise 02: PmergeMe**
  - Description: The PmergeMe program uses the merge-insert sort algorithm to sort the positive integer sequence using the std::vector and std::list container and printing the operation time.
    ```bash
    cd ex02
    make
    ./PmergeMe [argument1] [argument2] [argument3] [argument4] [argument5] ...
    ```

## Getting Started

For each exercise, navigate to the respective directory and follow the provided instructions to compile and execute the program.
