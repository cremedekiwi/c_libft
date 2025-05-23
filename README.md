# Libft

A custom implementation of essential C standard library functions. This library provides foundational functions for string manipulation, memory management, linked lists, and file descriptor operations.

## 📋 Table of Contents

- [About](#about)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Function Reference](#function-reference)
- [Project Structure](#project-structure)
- [Compilation](#compilation)
- [Testing](#testing)

## 🎯 About

**Libft** is the first project in the 42 School curriculum, designed to:
- Recreate essential C standard library functions from scratch
- Build a solid foundation for future C projects
- Develop understanding of memory management and data structures
- Create a reusable library for subsequent 42 projects

## ✨ Features

- **45 Standard Functions**: Complete reimplementation of essential libc functions
- **9 Bonus Functions**: Linked list manipulation utilities
- **Memory Safe**: Proper error handling and memory management
- **Norm Compliant**: Follows 42 School coding standards
- **Well Documented**: Clear function descriptions and usage examples

## 🚀 Installation

1. **Clone the repository:**
   ```bash
   git clone repo
   cd libft
   ```

2. **Compile the library:**
   ```bash
   make
   ```

3. **For bonus functions:**
   ```bash
   make bonus
   ```

## 💻 Usage

### Basic Example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // String manipulation
    char *str = ft_strdup("Hello, 42!");
    char *upper = ft_strmapi(str, ft_char_to_upper);
    
    // Memory management
    char *buffer = ft_calloc(10, sizeof(char));
    ft_strlcpy(buffer, "World", 10);
    
    // Output to file descriptor
    ft_putstr_fd("Result: ", 1);
    ft_putendl_fd(upper, 1);
    
    // Cleanup
    free(str);
    free(upper);
    free(buffer);
    
    return (0);
}
```

### Compilation with Your Project

```bash
gcc -Wall -Wextra -Werror your_code.c -L. -lft -o your_program
```

## 📚 Function Reference

### Character Classification & Conversion
| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is a digit |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character is ASCII |
| `ft_isprint` | Checks if character is printable |
| `ft_toupper` | Converts to uppercase |
| `ft_tolower` | Converts to lowercase |

### String Manipulation
| Function | Description |
|----------|-------------|
| `ft_strlen` | Calculates string length |
| `ft_strchr` | Locates first occurrence of character |
| `ft_strrchr` | Locates last occurrence of character |
| `ft_strncmp` | Compares strings up to n characters |
| `ft_strnstr` | Locates substring in string |
| `ft_strdup` | Duplicates string |
| `ft_substr` | Extracts substring |
| `ft_strjoin` | Concatenates two strings |
| `ft_strtrim` | Trims characters from string ends |
| `ft_split` | Splits string by delimiter |
| `ft_strmapi` | Applies function to each character |
| `ft_striteri` | Applies function to each character with index |

### Memory Management
| Function | Description |
|----------|-------------|
| `ft_memset` | Fills memory with constant byte |
| `ft_bzero` | Zeros memory block |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory with overlap handling |
| `ft_memchr` | Scans memory for character |
| `ft_memcmp` | Compares memory areas |
| `ft_calloc` | Allocates and zeros memory |

### String/Number Conversion
| Function | Description |
|----------|-------------|
| `ft_atoi` | Converts string to integer |
| `ft_itoa` | Converts integer to string |

### String Copying
| Function | Description |
|----------|-------------|
| `ft_strlcpy` | Safe string copying |
| `ft_strlcat` | Safe string concatenation |

### File Descriptor Output
| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Outputs character to fd |
| `ft_putstr_fd` | Outputs string to fd |
| `ft_putendl_fd` | Outputs string + newline to fd |
| `ft_putnbr_fd` | Outputs number to fd |

### Linked List Functions (Bonus)
| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates new list element |
| `ft_lstadd_front` | Adds element to list beginning |
| `ft_lstadd_back` | Adds element to list end |
| `ft_lstsize` | Counts list elements |
| `ft_lstlast` | Returns last list element |
| `ft_lstdelone` | Deletes single list element |
| `ft_lstclear` | Deletes entire list |
| `ft_lstiter` | Applies function to each element |
| `ft_lstmap` | Creates new list with function applied |

## 📁 Project Structure

```
libft/
├── Makefile         # Build configuration
├── README.md        # This file
├── src              # Header file with function prototypes and function implementations 
└── libft.a          # Compiled static library (after make)
```

## 🔧 Compilation

### Available Make Targets

- `make` or `make all`: Compiles the standard library
- `make bonus`: Compiles library with bonus functions
- `make clean`: Removes object files
- `make fclean`: Removes object files and library
- `make re`: Recompiles everything from scratch

### Compilation Flags

The library is compiled with strict flags for code quality:
- `-Wall`: Enable all common warnings
- `-Wextra`: Enable extra warnings
- `-Werror`: Treat warnings as errors

## 🧪 Testing

Each function includes commented test cases in the source files. To run individual tests:

1. Uncomment the main function in the desired `.c` file
2. Compile with: `gcc -Wall -Wextra -Werror ft_function.c -o test`
3. Run: `./test`

### Example Test

```c
// In ft_strlen.c
int main(void)
{
    printf("%d\n", ft_strlen("\0"));      // Output: 0
    printf("%d\n", ft_strlen("abc"));     // Output: 3
    return (0);
}
```

## 🔍 Key Implementation Details

### Memory Safety
- All functions properly handle NULL pointers
- Dynamic memory allocation includes failure checks
- No memory leaks in properly used functions

### Edge Cases
- Functions handle empty strings, NULL inputs, and boundary conditions
- Proper handling of integer overflow/underflow where applicable
- Buffer overflow protection in string functions

### Performance
- Efficient algorithms chosen for each function
- Minimal memory footprint
- Optimized for readability and maintainability
