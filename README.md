# Libft
Libft is a custom implementation of some of the standard C library functions and additional utility functions. The purpose of this library is to provide a set of basic functions to manipulate strings, memory, and linked lists that are commonly used in various C programming tasks.

## Introduction
This library was created as a project in the 42 School curriculum to help students get familiar with basic C programming and writing reusable code. It provides basic utility functions for handling strings, memory, and linked lists, as well as functions for outputting to file descriptors.

## Functions Overview
### Character and String Manipulation
These functions are used for handling individual characters and strings in various ways.

    ft_atoi.c: Converts a string to an integer.
    ft_isalnum.c: Checks if a character is alphanumeric.
    ft_isalpha.c: Checks if a character is alphabetic.
    ft_isascii.c: Checks if a character is part of the ASCII set.
    ft_isdigit.c: Checks if a character is a digit.
    ft_isprint.c: Checks if a character is printable.
    ft_itoa.c: Converts an integer to a string.
    ft_split.c: Splits a string into an array of strings based on a delimiter.
    ft_strchr.c: Finds the first occurrence of a character in a string.
    ft_strdup.c: Duplicates a string.
    ft_striteri.c: Applies a function to each character of a string with index awareness.
    ft_strjoin.c: Joins two strings into one.
    ft_strlcat.c: Appends a string to another, ensuring proper buffer size.
    ft_strlcpy.c: Copies a string to a destination buffer, ensuring proper size.
    ft_strlen.c: Calculates the length of a string.
    ft_strmapi.c: Applies a function to each character of a string, returning a new modified string.
    ft_strncmp.c: Compares two strings up to n characters.
    ft_strnstr.c: Locates a substring within another string.
    ft_strrchr.c: Finds the last occurrence of a character in a string.
    ft_strtrim.c: Removes specified characters from the beginning and end of a string.
    ft_substr.c: Extracts a substring from a string.
    ft_tolower.c: Converts an uppercase character to lowercase.
    ft_toupper.c: Converts a lowercase character to uppercase.

### Memory Management
Functions for managing and manipulating memory blocks.

    ft_bzero.c: Zeros out a memory block.
    ft_calloc.c: Allocates and zeroes out memory.
    ft_memchr.c: Searches for a byte in a block of memory.
    ft_memcmp.c: Compares two memory blocks.
    ft_memcpy.c: Copies memory from one area to another.
    ft_memmove.c: Moves memory, handling overlap between source and destination.
    ft_memset.c: Sets a memory block to a specified value.

### Linked List Functions
Utility functions for handling singly linked lists (t_list structure).

    ft_lstadd_back.c: Adds a new element to the end of a linked list.
    ft_lstadd_front.c: Adds a new element to the beginning of a linked list.
    ft_lstclear.c: Clears and frees the entire list.
    ft_lstdelone.c: Deletes and frees a single list element.
    ft_lstiter.c: Iterates over the list, applying a function to each element.
    ft_lstlast.c: Returns the last element of a list.
    ft_lstmap.c: Applies a function to each element of the list, returning a new list.
    ft_lstnew.c: Creates a new list element.
    ft_lstsize.c: Returns the size of a linked list.

### File Descriptor Output
Functions that allow outputting characters and strings to file descriptors (e.g., STDOUT, STDERR).

    ft_putchar_fd.c: Writes a character to a file descriptor.
    ft_putendl_fd.c: Writes a string to a file descriptor, followed by a newline.
    ft_putnbr_fd.c: Writes an integer to a file descriptor.
    ft_putstr_fd.c: Writes a string to a file descriptor.

## Usage
To use any of the functions provided in this library, simply include the header file libft.h in your project, compile the .c files with your source code, and link the compiled objects.

Example:
```
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, Libft!");
    ft_putstr_fd(str, 1);
    free(str);
    return 0;
}
```

## Installation

Clone the repository:
```
git clone https://github.com/your-username/libft.git
```
Navigate into the project directory:
```
cd libft
```
Compile the library:
```
make
```
Include libft.h in your project and link the compiled libft.a with your project:
```
gcc -Wall -Wextra -Werror your_code.c -L. -lft -o your_program
```
