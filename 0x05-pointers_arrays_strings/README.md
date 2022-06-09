# 0x05. C - Pointers, arrays and strings
# Resources
## Read or watch:

C - Arrays

C - Pointers

C - Strings

Memory Layout

# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
What are pointers and how to use them

What are arrays and how to use them

What are the differences between pointers and arrays

How to use strings and how to manipulate them

Scope of variables

### Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.

You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.

You are not allowed to publish any content of this project.

Any form of plagiarism is strictly forbidden and will result in removal from the program.

# Requirements
## General
Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden

You are allowed to use _putchar

You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account

In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do 
we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h

Don’t forget to push your header file

# More Info
You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, malloc and free - yet.

# Tasks
## 0. 98 Battery st.

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

**Prototype:** void reset_to_98(int *n);


## 1. Don't swap horses in crossing a stream

Write a function that swaps the values of two integers.

**Prototype:** void swap_int(int *a, int *b);


## 2. This report, by its very length, defends itself against the risk of being read

Write a function that returns the length of a string.

**Prototype:** int _strlen(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.


## 3. I do not fear computers. I fear the lack of them

Write a function that prints a string, followed by a new line, to stdout.

**Prototype:** void _puts(char *str);

FYI: The standard library provides a similar function: puts. Run man puts to learn more.


## 4. I can only go one way. I've not got a reverse gear

Write a function that prints a string, in reverse, followed by a new line.

**Prototype:** void print_rev(char *s);


## 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

Write a function that reverses a string.

**Prototype:** void rev_string(char *s);


## 6. Half the lies they tell about me aren't true

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

**Prototype:** void puts2(char *str);


## 7. Winning is only half of it. Having fun is the other half

Write a function that prints half of a string, followed by a new line.

**Prototype:** void puts_half(char *str);

The function should print the second half of the string

If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2


## 8. Arrays are not pointers

Write a function that prints n elements of an array of integers, followed by a new line.

**Prototype:** void print_array(int *a, int n);

where n is the number of elements of the array to be printed

Numbers must be separated by comma, followed by a space

The numbers should be displayed in the same order as they are stored in the array

You are allowed to use printf


## 9. strcpy

**Prototype:** char *_strcpy(char *dest, char *src);

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest

FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.

## 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

Write a function that convert a string to an integer.

**Prototype:** int _atoi(char *s);

The number in the string can be preceded by an infinite number of characters

You need to take into account all the - and + signs before the number

If there are no numbers in the string, the function must return 0

You are not allowed to use long

You are not allowed to declare new variables of “type” array

You are not allowed to hard-code special values

We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.



## 11. Don't hate the hacker, hate the code

Create a program that generates random valid passwords for the program 101-crackme.

You are allowed to use the standard library

You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)

man srand, rand, time

gdb and objdump can help



